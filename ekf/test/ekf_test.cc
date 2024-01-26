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
    }

    std::unique_ptr<::ekf::ekf> ekfInstance;

};

TEST_F(EkfTestFixture, ekf_ctor)
{
// test fixture constructed, it "works"
}

}
