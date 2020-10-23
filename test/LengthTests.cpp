#include <gtest/gtest.h>

extern "C"{
    #include "length.h"
}

TEST(LengthTest, should_1_inch_equals_1_inch) {
    LengthPtr length = newLength(1, Inch);
    LengthPtr result = as(length, Inch);

    EXPECT_EQ(result->value, 1.0);
    EXPECT_EQ(result->temp_unit, Inch);
}
TEST(LengthTest, should_2_feet_equals_2_feet) {
    LengthPtr length = newLength(2, Foot);
    LengthPtr result = as(length, Foot);

    EXPECT_EQ(result->value, 2.0);
    EXPECT_EQ(result->temp_unit, Foot);
}

TEST(LengthTest, should_1_yard_equals_1_yard) {
    LengthPtr length = newLength(1, Yard);
    LengthPtr result = as(length, Yard);

    EXPECT_EQ(result->value, 1.0);
    EXPECT_EQ(result->temp_unit, Yard);
}

TEST(LengthTest, should_1_foot_equals_12_inches) {
    LengthPtr length = newLength(1, Foot);
    LengthPtr result = as(length, Inch);

    EXPECT_EQ(result->value, 12.0);
    EXPECT_EQ(result->temp_unit, Inch);
}

TEST(LengthTest, should_3_feet_equals_1_yard) {
    LengthPtr length = newLength(3, Foot);
    LengthPtr result = as(length, Yard);

    EXPECT_EQ(result->value, 1);
    EXPECT_EQ(result->temp_unit, Yard);
}

TEST(LengthTest, should_1_yard_equals_3_feet) {
    LengthPtr length = newLength(1, Yard);
    LengthPtr result = as(length, Foot);

    EXPECT_EQ(result->value, 3);
    EXPECT_EQ(result->temp_unit, Foot);
}

TEST(LengthTest, should_1_yard_equals_36_inches) {
    LengthPtr length = newLength(1, Yard);
    LengthPtr result = as(length, Inch);

    EXPECT_EQ(result->value, 36);
    EXPECT_EQ(result->temp_unit, Inch);
}

TEST(LengthTest, should_12_inches_equals_1_foot) {
    LengthPtr length = newLength(12, Inch);
    LengthPtr result = as(length, Foot);

    EXPECT_EQ(result->value, 1);
    EXPECT_EQ(result->temp_unit, Foot);
}

TEST(LengthTest, should_36_inches_equals_1_yard) {
    LengthPtr length = newLength(36, Inch);
    LengthPtr result = as(length, Yard);

    EXPECT_EQ(result->value, 1);
    EXPECT_EQ(result->temp_unit, Yard);
}

TEST(LengthTest, should_18_inches_equals_half_yard) {
    LengthPtr length = newLength(18, Inch);
    LengthPtr result = as(length, Yard);

    EXPECT_EQ(result->value, 0.5);
    EXPECT_EQ(result->temp_unit, Yard);
}