#include <gtest/gtest.h>

#include "length.h"

TEST(LengthTest, should_1_inch_equals_1_inch) {
    LengthPtr length = newLength(1, "inch");
    LengthPtr result = as(length, "inch");

    EXPECT_EQ(result->val, 1.0);
    EXPECT_EQ(result->uinnt, "inch");
}
TEST(LengthTest, should_2_feet_equals_2_feet) {
    LengthPtr length = newLength(2, "f");
    LengthPtr result = as(length, "f");

    EXPECT_EQ(result->val, 2.0);
    EXPECT_EQ(result->uinnt, "f");
}

TEST(LengthTest, should_1_yard_equals_1_yard) {
    LengthPtr length = newLength(1, "yard");
    LengthPtr result = as(length, "yard");

    EXPECT_EQ(result->val, 1.0);
    EXPECT_EQ(result->uinnt, "yard");
}

TEST(LengthTest, should_1_foot_equals_12_inches) {
    LengthPtr length = newLength(1, "f");
    LengthPtr result = as(length, "inch");

    EXPECT_EQ(result->val, 12.0);
    EXPECT_EQ(result->uinnt, "inch");
}

TEST(LengthTest, should_3_feet_equals_1_yard) {
    LengthPtr length = newLength(3, "f");
    LengthPtr result = as(length, "yard");

    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->uinnt, "yard");
}

TEST(LengthTest, should_1_yard_equals_3_feet) {
    LengthPtr length = newLength(1, "yard");
    LengthPtr result = as(length, "f");

    EXPECT_EQ(result->val, 3);
    EXPECT_EQ(result->uinnt, "f");
}

TEST(LengthTest, should_1_yard_equals_36_inches) {
    LengthPtr length = newLength(1, "yard");
    LengthPtr result = as(length, "inch");

    EXPECT_EQ(result->val, 36);
    EXPECT_EQ(result->uinnt, "inch");
}

TEST(LengthTest, should_12_inches_equals_1_foot) {
    LengthPtr length = newLength(12, "inch");
    LengthPtr result = as(length, "f");

    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->uinnt, "f");
}

TEST(LengthTest, should_36_inches_equals_1_yard) {
    LengthPtr length = newLength(36, "inch");
    LengthPtr result = as(length, "yard");

    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->uinnt, "yard");
}

TEST(LengthTest, should_18_inches_equals_half_yard) {
    LengthPtr length = newLength(18, "inch");
    LengthPtr result = as(length, "yard");

    EXPECT_EQ(result->val, 0.5);
    EXPECT_EQ(result->uinnt, "yard");
}