#include "pch.h"


#include "Caclculator.h"
#include <gtest/gtest.h>

TEST(CaclculatorTest, Add_PositiveNumbers) {
    Caclculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
}

TEST(CaclculatorTest, Add_NegativeNumbers) {
    Caclculator calc;
    EXPECT_EQ(calc.add(-2, -3), -5);
}

TEST(CaclculatorTest, Add_MixedNumbers) {
    Caclculator calc;
    EXPECT_EQ(calc.add(-2, 3), 1);
    EXPECT_EQ(calc.add(2, -3), -1);
}

TEST(CaclculatorTest, Add_Zero) {
    Caclculator calc;
    EXPECT_EQ(calc.add(0, 0), 0);
    EXPECT_EQ(calc.add(0, 5), 5);
    EXPECT_EQ(calc.add(5, 0), 5);
}
