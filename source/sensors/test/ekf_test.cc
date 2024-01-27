#include "ekf/ekf.hh"

#include <gtest/gtest.h>

#include <memory>

namespace ekf::test
{

class EkfTestFixture : public testing::Test
{
protected:
    void SetUp()
    {
        ekfInstance = std::make_unique<::ekf::ekf>(::ekf::ekf{});

        {
            auto duration = std::chrono::milliseconds(100);
            auto timepoint = std::chrono::steady_clock::time_point{duration};
            pose_measurement pose;
            pose.pose = manif::SE3d::Identity();
            pose.timestamp = timepoint;
            sensor_messages.push_back(pose);
        }
    }

    std::unique_ptr<::ekf::ekf> ekfInstance;

    std::vector<sensor_t> sensor_messages;

};

TEST_F(EkfTestFixture, ekf_ctor)
{
// test fixture constructed, it "works"
}

/*
TEST_F(EkfTestFixture, ekf_pose_estimate)
{
    for(const auto &sensor : sensor_messages)
    {
        auto pose = ekf.add_sensor(sensorMessages);
    }
}
*/

}
