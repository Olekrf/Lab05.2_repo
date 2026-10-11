#include <gtest/gtest.h>

#define main app_main
#include "lab05_2.cpp"
#undef main

TEST(UnitTest2, TestS) {
    double x = 2.0;
    double eps = 1e-4;
    int n = 0;
    double s = 0;

    S(x, eps, n, s);

    EXPECT_NEAR(s, log(x), 1e-3);
}

TEST(UnitTest2, TestA) {
    double x = 2.0;
    int n = 1;
    double a = 0.5;
    A(x, n, a);
    EXPECT_NEAR(a, 0.125, 1e-5);
}
