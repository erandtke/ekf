/**
 * @file isensor.hh
 */

#pragma once

#include <chrono>

namespace ekf
{
struct isensor
{
    virtual std::chrono::steady_clock GetTimestamp() = 0;
};
}
