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
    manif::SE_2_3d add_sensor(const isensor &sensor);
};
}
