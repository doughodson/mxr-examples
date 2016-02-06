
#ifndef __oe_example_Station_H__
#define __oe_example_Station_H__

#include "openeaagles/simulation/Station.h"
#include <QObject>

class QTimer;

namespace example {

class Station;

// helper object for background station tasks
class StnTimerObject : public QObject
{
   Q_OBJECT

public:
   StnTimerObject(Station* station, QObject* parent = nullptr);
   ~StnTimerObject();

public slots:
   virtual void updateStation();

private:
   Station* stn;     // station pointer
   QTimer* bgTimer;  // timer
};

class Station : public oe::simulation::Station
{
   DECLARE_SUBCLASS(Station, oe::simulation::Station)
public:
   Station();

   // create our top level windows
   virtual int createWindow(int argc, char *argv[]);

private:
   StnTimerObject* timerObj;
};

}

#endif
