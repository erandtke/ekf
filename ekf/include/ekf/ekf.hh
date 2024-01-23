/**
 * @file iekf
 * ekf interface
 */

#pragma once

#include "manif/SE_2_3.h"

#include "ekf/isensor.hh"


namespace ekf
{
class ekf
{
    virtual manif::SE_2_3 add_sensor(const sensor_t &sensor) = 0;
}
}
