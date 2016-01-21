//------------------------------------------------------------------------------
// Class: TestStateMachine02
//------------------------------------------------------------------------------
#ifndef __oe_test_TestStateMachine02_H__
#define __oe_test_TestStateMachine02_H__

#include "openeaagles/basic/StateMachine.h"

namespace oe {
namespace test {

//------------------------------------------------------------------------------
// Class: TestStateMachine02
// Description: State Machine Test #2 --
//
//    Same as Test #1 except that we're using separate state specific functions.
//
//------------------------------------------------------------------------------
class TestStateMachine02 : public Basic::StateMachine
{
   DECLARE_SUBCLASS(TestStateMachine02, Basic::StateMachine)

public:
   enum { CALL_01 = 11, CALL_02 = 22 };

public:
   TestStateMachine02();

protected:
   void preStateProc(const LCreal dt) override;
   void postStateProc(const LCreal dt) override;
   unsigned short stateTable(
         const unsigned short cstate,
         const StateTableCode code,
         const LCreal dt=0
      ) override;

private:
   // State specific functions
   void stateFunc00(const LCreal dt);
   void stateFunc01(const LCreal dt);
   void stateFunc02(const LCreal dt);
   void stateFunc03(const LCreal dt);
   void stateFunc04(const LCreal dt);
   void stateFunc05(const LCreal dt);
   void stateFunc11(const LCreal dt);
   void stateFunc12(const LCreal dt);
   void stateFunc13(const LCreal dt);
   void stateFunc14(const LCreal dt);
   void stateFunc15(const LCreal dt);
   void stateFunc21(const LCreal dt);
   void stateFunc22(const LCreal dt);
   void stateFunc23(const LCreal dt);
   void stateFunc99(const LCreal dt);
};

} // End test namespace
} // End oe namespace

#endif
