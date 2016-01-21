//------------------------------------------------------------------------------
// Class: TestVVI
//
// Description: Test the gauge slider
// This page will supply test data to a generic analog tape gauge
//
//------------------------------------------------------------------------------
#ifndef __Eaagles_demo_TestVVI_H__
#define __Eaagles_demo_TestVVI_H__

#include "openeaagles/basicGL/Page.h"

namespace Eaagles {
namespace demo {

class TestVVI : public BasicGL::Page
{
   DECLARE_SUBCLASS(TestVVI, BasicGL::Page)

public:
   TestVVI();

   void updateData(const LCreal dt = 0) override;

private:
    LCreal gaugePosition;       // our gauge position (inches)
    SendData gaugePositionSD;
    SendData gaugePositionROSD;
    LCreal  gaugeRate;          // rate which are going (up or down)
};

} // end of demo namespace
} // end of Eaagles namespace

#endif

