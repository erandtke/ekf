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

std::tuple<manif::SE2d> update(const control_input &this_sensor, std::chrono::s)
{

}

struct control_input : public sensor_base<control_input>

}
