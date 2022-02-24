#include <gtest/gtest.h>

#include "CelsiusToFahrenheit.hpp"

TEST(CelsiusToFahrenheitTest, CalculatesCorrectValueFor0degCelsius)
{
    EXPECT_DOUBLE_EQ(CelsiusToFahrenheit(0.0), 32.0);
}