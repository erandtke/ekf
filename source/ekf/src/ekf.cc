#include "ekf/ekf.hh"

namespace ekf
{

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
