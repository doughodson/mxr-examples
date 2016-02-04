
#include "openeaagles/simulation/Simulation.h"
#include "openeaagles/basic/Parser.h"
#include "openeaagles/basic/Pair.h"

// factories
#include "openeaagles/simulation/factory.h"
#include "openeaagles/models/factory.h"
#include "openeaagles/basic/factory.h"

#include <cstring>
#include <cstdlib>

namespace oe {
namespace example {

// frame rate (50 Hz)
const unsigned int frameRate = 50;

static simulation::Simulation* simulation = nullptr;

// our class factory
static basic::Object* factory(const char* name)
{
   basic::Object* obj = nullptr;

   if (obj == nullptr) obj = simulation::factory(name);
   if (obj == nullptr) obj = models::factory(name);
   if (obj == nullptr) obj = basic::factory(name);

   return obj;
}

// simulation builder
static simulation::Simulation* builder(const char* const filename)
{
   // read configuration file
   int errors = 0;
   basic::Object* obj = basic::lcParser(filename, factory, &errors);
   if (errors > 0) {
      std::cerr << "File: " << filename << ", errors: " << errors << std::endl;
      std::exit(EXIT_FAILURE);
   }

   // test to see if an object was created
   if (obj == nullptr) {
      std::cerr << "Invalid configuration file, no objects defined!" << std::endl;
      std::exit(EXIT_FAILURE);
   }

   // do we have a basic::Pair, if so, point to object in Pair, not Pair itself
   basic::Pair* pair = dynamic_cast<basic::Pair*>(obj);
   if (pair != nullptr) {
      obj = pair->object();
      obj->ref();
      pair->unref();
   }

   // try to cast to proper object, and check
   simulation::Simulation* simulation = dynamic_cast<simulation::Simulation*>(obj);
   if (simulation == nullptr) {
      std::cerr << "Invalid configuration file!" << std::endl;
      std::exit(EXIT_FAILURE);
   }
   return simulation;
}

int main(int argc, char* argv[])
{
   // default configuration filename
   const char* configFilename = "test1.edl";

   // read filename from command line if provided
   for (int i = 1; i < argc; i++) {
      if (std::strcmp(argv[i], "-f") == 0) {
         configFilename = argv[++i];
      }
   }

   // build simulation
   simulation = builder(configFilename);

   // reset component tree
   simulation->reset();

   // delta time (20ms)
   const LCreal dt = static_cast<LCreal>(1.0)/static_cast<LCreal>(frameRate);

   // execute simulation as fast as possible
   for(; simulation->getExecTimeSec() < 50.0; ) {
      // print out simulation time
      std::cout << simulation->getExecTimeSec() << std::endl;
      // execute timestep
      simulation->tcFrame( dt );
      simulation->updateData( dt );
   }
   return 0;
}

} // namespace example
} // namespace oe

//
int main(int argc, char* argv[])
{
  oe::example::main(argc, argv);
}
