/*
 * @file _sensors.hh
 * "sensors" like pose, veolicty, delta pose
 */

#pragma once


#inlude "units/units.hh"

#include "manif/SE3.h"

#include <chrono>
#include <variant>

namespace ekf
{
struct pose_measurement;

using sensor_t = std::variant<pose_measurement, control_input>;

struct pose_measurement
{
    manif::SE3d pose;
    std::chrono::steady_clock::time_point timestamp;
};

struct control_input
{
    mps linear_velocity;
    rps angula_velocity;
};
}
