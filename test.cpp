#include <gtest/gtest.h>

#define main app_main
#include "lab05_2.cpp"
#undef main

TEST(UnitTest2, TestS) {
    const double x = 2;
    const double eps = 0.00001;
    int n = 0;
    double s = 0;

    S(x, eps, n, s);

    EXPECT_NEAR(s, 0.69315, 0.0001);
}

TEST(UnitTest2, TestA) {
    double x = 2.0;
    int n = 1;
    double a = 0.5;
    A(x, n, a);
    EXPECT_DOUBLE_EQ(a, 0.125);
}
