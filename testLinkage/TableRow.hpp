
#ifndef __TableRow_HPP__
#define __TableRow_HPP__

#include "mixr/graphics/readouts/AbstractReadout.hpp"

namespace mixr {
namespace base { class Pair; }
}

//-----------------------------------------------------------------------
// Class: TableRow
// Description: One row of in the table (used by Table only)
//-----------------------------------------------------------------------
class TableRow final: public mixr::graphics::AbstractReadout
{
   DECLARE_SUBCLASS(TableRow, mixr::graphics::AbstractReadout)

public:
   TableRow();

   void put(mixr::base::Pair* const);

   // graphics::Readout interface
   int line() const final;
   void line(const int ll) final;
   int column() const final;
   void column(const int cc) final;

private:
   void position();
};

#endif
