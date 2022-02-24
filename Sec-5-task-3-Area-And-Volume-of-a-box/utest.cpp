#include <gtest/gtest.h>

#include <exception>

#include "box-calcs.hpp"

TEST(BaseAreaTest, ReturnsZeroWhenAnyOfArgsIsZero)
{
    EXPECT_EQ(BaseArea(0, 2.0), 0);
    EXPECT_EQ(BaseArea(4.0, 0), 0);
    EXPECT_EQ(BaseArea(0, 0), 0);
}

TEST(BaseAreaTest, ThrowsInvalidArgumentWhenNegativeArgumentPassed)
{
    EXPECT_THROW(BaseArea(-1.0, 0), std::invalid_argument);
    EXPECT_THROW(BaseArea(0.0, -1.0), std::invalid_argument);
    EXPECT_THROW(BaseArea(-1.0, -2.3), std::invalid_argument);
}