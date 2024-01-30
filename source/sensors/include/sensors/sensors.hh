/*
 * @file _sensors.hh
 * "sensors" like pose, veolicty, delta pose
 */

#pragma once


#include "units/units.hh"

#include "manif/SE3.h"

#include <chrono>
#include <variant>

namespace ekf
{
struct pose_measurement;
struct control_input;

using sensor_t = std::variant<pose_measurement, control_input>;

template<class T>
struct sensor_base
{
    std::chrono::steady_clock::time_point timestamp;
};

struct pose_measurement : public sensor_base<pose_measurement>
{
    manif::SE3d pose;
};

struct control_input : public sensor_base<control_input>
{
    units::mps linear_velocity;
    units::rps angular_velocity;
    std::chrono::duration<double> duration;
};
}
