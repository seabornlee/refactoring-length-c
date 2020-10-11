#include <gtest/gtest.h>

#include "Length.h"

TEST(LengthTest, should_1_inch_equals_1_inch) {
    Length length(1, "inch");
    Length result = length.as("inch");

    EXPECT_EQ(result.getVal(), 1.0);
    EXPECT_EQ(result.getUinnt(), "inch");
}

TEST(LengthTest, should_2_feet_equals_2_feet) {
    Length length(2, "f");
    Length result = length.as("f");

    EXPECT_EQ(result.getVal(), 2.0);
    EXPECT_EQ(result.getUinnt(), "f");
}

TEST(LengthTest, should_1_yard_equals_1_yard) {
    Length length(1, "yard");
    Length result = length.as("yard");

    EXPECT_EQ(result.getVal(), 1.0);
    EXPECT_EQ(result.getUinnt(), "yard");
}

TEST(LengthTest, should_1_foot_equals_12_inches) {
    Length length(1, "f");
    Length result = length.as("inch");

    EXPECT_EQ(result.getVal(), 12.0);
    EXPECT_EQ(result.getUinnt(), "inch");
}

TEST(LengthTest, should_3_foot_equals_1_yard) {
    Length length(3, "f");
    Length result = length.as("yard");

    EXPECT_EQ(result.getVal(), 1.0);
    EXPECT_EQ(result.getUinnt(), "yard");
}

TEST(LengthTest, should_1_yard_equals_3_feet) {
    Length length(1, "yard");
    Length result = length.as("f");

    EXPECT_EQ(result.getVal(), 3.0);
    EXPECT_EQ(result.getUinnt(), "f");
}

TEST(LengthTest, should_1_yard_equals_36_inches) {
    Length length(1, "yard");
    Length result = length.as("inch");

    EXPECT_EQ(result.getVal(), 36.0);
    EXPECT_EQ(result.getUinnt(), "inch");
}

TEST(LengthTest, should_2_yards_equals_72_inches) {
    Length length(2, "yard");
    Length result = length.as("inch");

    EXPECT_EQ(result.getVal(), 72.0);
    EXPECT_EQ(result.getUinnt(), "inch");
}

TEST(LengthTest, should_12_inches_equals_1_foot) {
    Length length(12, "inch");
    Length result = length.as("f");

    EXPECT_EQ(result.getVal(), 1.0);
    EXPECT_EQ(result.getUinnt(), "f");
}

TEST(LengthTest, should_36_inches_equals_1_yard) {
    Length length(36, "inch");
    Length result = length.as("yard");

    EXPECT_EQ(result.getVal(), 1.0);
    EXPECT_EQ(result.getUinnt(), "yard");
}

TEST(LengthTest, should_18_inches_equals_half_yard) {
    Length length(18, "inch");
    Length result = length.as("yard");

    EXPECT_EQ(result.getVal(), 0.5);
    EXPECT_EQ(result.getUinnt(), "yard");
}