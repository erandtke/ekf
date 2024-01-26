/*
 * @file _sensors.hh
 * "sensors" like pose, veolicty, delta pose
 */

#pragma once


#include "manif/SE3.h"

#include <chrono>
#include <variant>

namespace ekf
{
struct pose_measurement;

using sensor_t = std::variant<pose_measurement>;

struct pose_measurement
{
    manif::SE3d pose;
    std::chrono::steady_clock timestamp;
};
}
