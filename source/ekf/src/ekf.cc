#include "ekf/ekf.hh"
#include "sensors/sensors.hh"

namespace ekf
{
namespace
{
SE2d apply(
}

ekf::ekf()
    :
        pose_(manif::SE2d::Identity())
{
}

manif::SE2d ekf::add_sensor(const sensor_t &sensor)
{
    return manif::SE2d::Identity();
}

}
