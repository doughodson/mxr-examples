//------------------------------------------------------------------------------
// Class: Factory
//------------------------------------------------------------------------------
#include "Factory.h"

#include "openeaagles/basic/Object.h"

#include "Display.h"
#include "Table.h"

// class factories
#include "openeaagles/ioDevice/Factory.h"
#include "openeaagles/gui/glut/Factory.h"
#include "openeaagles/basicGL/Factory.h"
#include "openeaagles/basic/Factory.h"

#include <cstring>

namespace oe {
namespace test {

Factory::Factory()
{}

basic::Object* Factory::createObj(const char* name)
{
    basic::Object* obj = nullptr;

   if ( std::strcmp(name, Display::getFactoryName()) == 0 ) {
      obj = new Display();
   }
   else if ( std::strcmp(name, Table::getFactoryName()) == 0 ) {
      obj = new Table();
   }

   if (obj == nullptr) obj = ioDevice::Factory::createObj(name);
   if (obj == nullptr) obj = glut::Factory::createObj(name);
   if (obj == nullptr) obj = BasicGL::Factory::createObj(name);
   if (obj == nullptr) obj = basic::Factory::createObj(name);

    return obj;
}

} // End of test namespace
} // End of oe namespace
