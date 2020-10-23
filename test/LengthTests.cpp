#include <gtest/gtest.h>

extern "C"{
    #include "length.h"
}

TEST(LengthTest, should_1_inch_equals_1_inch) {
    LengthPtr length = newLength(1, INCH);
    LengthPtr result = as(length, INCH);

    EXPECT_EQ(result->value, 1.0);
    EXPECT_EQ(result->unit, INCH);
}
TEST(LengthTest, should_2_feet_equals_2_feet) {
    LengthPtr length = newLength(2, FOOT);
    LengthPtr result = as(length, FOOT);

    EXPECT_EQ(result->value, 2.0);
    EXPECT_EQ(result->unit, FOOT);
}

TEST(LengthTest, should_1_yard_equals_1_yard) {
    LengthPtr length = newLength(1, YARD);
    LengthPtr result = as(length, YARD);

    EXPECT_EQ(result->value, 1.0);
    EXPECT_EQ(result->unit, YARD);
}

TEST(LengthTest, should_1_foot_equals_12_inches) {
    LengthPtr length = newLength(1, FOOT);
    LengthPtr result = as(length, INCH);

    EXPECT_EQ(result->value, 12.0);
    EXPECT_EQ(result->unit, INCH);
}

TEST(LengthTest, should_3_feet_equals_1_yard) {
    LengthPtr length = newLength(3, FOOT);
    LengthPtr result = as(length, YARD);

    EXPECT_EQ(result->value, 1);
    EXPECT_EQ(result->unit, YARD);
}

TEST(LengthTest, should_1_yard_equals_3_feet) {
    LengthPtr length = newLength(1, YARD);
    LengthPtr result = as(length, FOOT);

    EXPECT_EQ(result->value, 3);
    EXPECT_EQ(result->unit, FOOT);
}

TEST(LengthTest, should_1_yard_equals_36_inches) {
    LengthPtr length = newLength(1, YARD);
    LengthPtr result = as(length, INCH);

    EXPECT_EQ(result->value, 36);
    EXPECT_EQ(result->unit, INCH);
}

TEST(LengthTest, should_12_inches_equals_1_foot) {
    LengthPtr length = newLength(12, INCH);
    LengthPtr result = as(length, FOOT);

    EXPECT_EQ(result->value, 1);
    EXPECT_EQ(result->unit, FOOT);
}

TEST(LengthTest, should_36_inches_equals_1_yard) {
    LengthPtr length = newLength(36, INCH);
    LengthPtr result = as(length, YARD);

    EXPECT_EQ(result->value, 1);
    EXPECT_EQ(result->unit, YARD);
}

TEST(LengthTest, should_18_inches_equals_half_yard) {
    LengthPtr length = newLength(18, INCH);
    LengthPtr result = as(length, YARD);

    EXPECT_EQ(result->value, 0.5);
    EXPECT_EQ(result->unit, YARD);
}