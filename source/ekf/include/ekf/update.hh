/*
 * @file update.hh
 * update step
 */
#pragma once

#include "sensors/sensors.hh"

#include "manif/SE2.h"

#include <tuple>

namespace ekf
{

manif::SE2d update(const control_input &this_sensor, manif::SE2d pose);

}
