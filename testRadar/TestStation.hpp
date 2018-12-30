
#ifndef __TestStation_HPP__
#define __TestStation_HPP__

#include "mixr/simulation/Station.hpp"

namespace mixr {
namespace base { class Number; }
namespace glut { class GlutDisplay; }
}

//------------------------------------------------------------------------------
// Class: TestStation
// Description: Test station class that adds our graphics, which is managed by
//              a GlutDisplay, adds processing of the Hands On Throttle And Stick
//              (HOTAS) device, which is usually just a joystick, and adds stepping
//              of our ownship to the next local, air vehicle player.
//
// Factory name: TestStation
// Slots:
//   glutDisplay  <graphics::GlutDisplay>  ! All of our display components
//------------------------------------------------------------------------------
class TestStation final: public mixr::simulation::Station
{
   DECLARE_SUBCLASS(TestStation, mixr::simulation::Station)

public:
   TestStation();

   // Step our "ownship" to the next local air vehicle
   void stepOwnshipPlayer();

   void updateTC(const double dt = 0.0) final;
   void updateData(const double dt = 0.0) final;
   void reset() final;

private:
   mixr::base::safe_ptr<mixr::glut::GlutDisplay> glutDisplay;
   bool glutDisplayInit{};

   // Past (N-1) switches and values
   bool rstSw1{};
   bool frzSw1{};
   bool tgtStepSw1{};
   bool wpnRelSw1{};
   bool incTagPlayerSw1{};
   double bgAntenna{};

private:
   // slot table helper methods
   bool setSlotGlutDisplay(mixr::glut::GlutDisplay* const);
};

#endif
