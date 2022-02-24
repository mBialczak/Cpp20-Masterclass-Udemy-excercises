#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "CelsiusToFahrenheit.hpp"

TEST(CelsiusToFahrenheitTest, CalculatesCorrectValueFor0degCelsius)
{
    EXPECT_DOUBLE_EQ(CelsiusToFahrenheit(0.0), 32.0);
}

TEST(CelsiusToFahrenheitTest, CalculatesNegativeCelsiusValuesCorrectly)
{
    EXPECT_DOUBLE_EQ(CelsiusToFahrenheit(-10.5), 13.1);
    EXPECT_DOUBLE_EQ(CelsiusToFahrenheit(-144.75), -228.55);
    EXPECT_THAT(CelsiusToFahrenheit(-51.0), testing::DoubleEq(-59.8));
}

TEST(CelsiusToFahrenheitTest, CalculatesPositiveCelsiusValuesCorrectly)
{
    constexpr double precission = 0.001;
    EXPECT_DOUBLE_EQ(CelsiusToFahrenheit(0.13), 32.234);
    EXPECT_NEAR(CelsiusToFahrenheit(8.4), 47.12, precission);
    EXPECT_THAT(CelsiusToFahrenheit(48.3), testing::DoubleNear(118.94, precission));
}