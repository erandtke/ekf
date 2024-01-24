#include "ekf/ekf.hh"

#include <gtest/gtest.h>

#include <memory>

namespace ekf::test
{

class EkfTestFixture : testing::Test
{
protected:
    Setup() override
    {
        ekf = std::make_unique<ekf::ekf>();
    }

    std::unique_ptr<ekf::ekf> ekf;

}

TEST_F(ekf, ekf_ctor)
{
// test fixture constructed, it "works"
}

}
