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

manif::SE2d update(const control_input &sensor, manif::SE2d pose)
{
    auto du = Eigen::Vector3d{sensor.linear_velocity.value, 0., sensor.angular_velocity.value};

    return pose.plus(du);
}

}
