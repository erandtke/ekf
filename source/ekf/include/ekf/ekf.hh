/**
 * @file iekf
 * ekf interface
 */

#pragma once

#include "manif/SE2.h"

#include "sensors/sensors.hh"


namespace ekf
{
class ekf
{
public:
    ekf();
    manif::SE2d add_sensor(const sensor_t &sensor);
private:
    manif::SE2d pose_;
};


}
