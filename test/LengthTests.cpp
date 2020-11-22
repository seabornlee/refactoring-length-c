#include <gtest/gtest.h>

#include "length.h"

class LengthTest : public testing::Test {
protected:
    void SetUp() override {
        length = nullptr;
        result = nullptr;
    }

    void TearDown() override {
        if (length != result && result != nullptr) {
            free(result);
            result = nullptr;
        }

        if (length != nullptr) {
            free(length);
            length = nullptr;
        }
    }

    LengthPtr length = nullptr;
    LengthPtr result = nullptr;
};

TEST_F(LengthTest, should_1_inch_equals_1_inch) {
    length = newLength(1, "inch");
    result = as(length, "inch");

    EXPECT_EQ(result->val, 1.0);
    EXPECT_EQ(result->uinnt, "inch");
}

TEST_F(LengthTest, should_2_feet_equals_2_feet) {
    length = newLength(2, "f");
    result = as(length, "f");

    EXPECT_EQ(result->val, 2.0);
    EXPECT_EQ(result->uinnt, "f");
}

TEST_F(LengthTest, should_1_yard_equals_1_yard) {
    length = newLength(1, "yard");
    result = as(length, "yard");

    EXPECT_EQ(result->val, 1.0);
    EXPECT_EQ(result->uinnt, "yard");
}

TEST_F(LengthTest, should_1_foot_equals_12_inches) {
    length = newLength(1, "f");
    result = as(length, "inch");

    EXPECT_EQ(result->val, 12.0);
    EXPECT_EQ(result->uinnt, "inch");
}

TEST_F(LengthTest, should_3_feet_equals_1_yard) {
    length = newLength(3, "f");
    result = as(length, "yard");

    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->uinnt, "yard");
}

TEST_F(LengthTest, should_1_yard_equals_3_feet) {
    length = newLength(1, "yard");
    result = as(length, "f");

    EXPECT_EQ(result->val, 3);
    EXPECT_EQ(result->uinnt, "f");
}

TEST_F(LengthTest, should_1_yard_equals_36_inches) {
    length = newLength(1, "yard");
    result = as(length, "inch");

    EXPECT_EQ(result->val, 36);
    EXPECT_EQ(result->uinnt, "inch");
}

TEST_F(LengthTest, should_12_inches_equals_1_foot) {
    length = newLength(12, "inch");
    result = as(length, "f");

    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->uinnt, "f");
}

TEST_F(LengthTest, should_36_inches_equals_1_yard) {
    length = newLength(36, "inch");
    result = as(length, "yard");

    EXPECT_EQ(result->val, 1);
    EXPECT_EQ(result->uinnt, "yard");
}

TEST_F(LengthTest, should_18_inches_equals_half_yard) {
    length = newLength(18, "inch");
    result = as(length, "yard");

    EXPECT_EQ(result->val, 0.5);
    EXPECT_EQ(result->uinnt, "yard");
}