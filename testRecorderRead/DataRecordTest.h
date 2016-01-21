//------------------------------------------------------------------------------
// Class: DataRecordTest
//------------------------------------------------------------------------------
#ifndef __oe_test_DataRecordTest_H__
#define __oe_test_DataRecordTest_H__

#include "openeaagles/basic/Component.h"

namespace oe {

namespace Recorder { class InputHandler; class OutputHandler; }

namespace test {

//------------------------------------------------------------------------------
// Class: DataRecordTest
//------------------------------------------------------------------------------
class DataRecordTest : public Basic::Component
{
   DECLARE_SUBCLASS(DataRecordTest, Basic::Component)

public:
    DataRecordTest();

    // Main test
    void runTest();

protected:
    // Slot functions
    virtual bool setSlotInputHandler(Recorder::InputHandler* const msg);
    virtual bool setSlotOutputHandler(Recorder::OutputHandler* const msg);

private:
   void initData();

   Basic::safe_ptr<Recorder::InputHandler> inputHandler;
   Basic::safe_ptr<Recorder::OutputHandler> outputHandler;
};

}
}

#endif
