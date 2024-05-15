#ifndef TEST_HEADER_
#define TEST_HEADER_

#include "../s21_math.h"
#include "tests.h"

#endif
START_TEST(s21_exp_test1) {
  ck_assert_double_eq(s21_exp(25048.369), exp(25048.369));
}

END_TEST

START_TEST(s21_exp_test2) {
  ck_assert_double_eq_tol(s21_exp(-14.96), exp(-14.96), S21_ACCURACY);
}

END_TEST

START_TEST(s21_exp_test3) {
  ck_assert_double_eq(s21_exp(INFINITY), exp(INFINITY));
}

END_TEST

START_TEST(s21_exp_test4) {
  ck_assert_double_nan(s21_exp(NAN));
  ck_assert_double_nan(exp(NAN));
}

END_TEST

START_TEST(s21_exp_test5) {
  ck_assert_double_eq(s21_exp(-INFINITY), exp(-INFINITY));
}

END_TEST

START_TEST(s21_exp_test6) {
  ck_assert_double_eq_tol(s21_exp(0), exp(0), S21_ACCURACY);
}

END_TEST

START_TEST(s21_exp_test7) {
  ck_assert_double_eq_tol(s21_exp(1), exp(1), S21_ACCURACY);
}

END_TEST

START_TEST(s21_exp_test8) {
  ck_assert_double_eq_tol(s21_exp(-1), exp(-1), S21_ACCURACY);
}
END_TEST

START_TEST(s21_exp_test9) { ck_assert_ldouble_nan(s21_exp(S21_NaN)); }

END_TEST

START_TEST(s21_exp_test10) {
  double x = 0.0;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_ACCURACY);
  double x_1 = -0.0;
  ck_assert_ldouble_eq_tol(s21_exp(x_1), exp(x_1), S21_ACCURACY);
}

END_TEST

START_TEST(s21_exp_test11) {
  for (double value = -25; value < 21.5; value += 0.5) {
    ck_assert_ldouble_eq_tol(s21_exp(value), exp(value), S21_ACCURACY);
  }
  double x = 716;
  ck_assert_ldouble_eq(s21_exp(x), exp(x));
}

END_TEST

// START_TEST(s21_exp_test12) {
//   double x = INT_MAX;
//   ck_assert_ldouble_eq(s21_exp(x), exp(x));
//   double x_1 = INT_MIN;
//   ck_assert_ldouble_eq(s21_exp(x_1), exp(x_1));
// }

// END_TEST

START_TEST(s21_exp_test13) {
  double x = DBL_MAX;
  ck_assert_ldouble_eq(s21_exp(x), exp(x));

  double x_1 = DBL_MIN;
  ck_assert_ldouble_eq(s21_exp(x_1), exp(x_1));

  double x_2 = -DBL_MAX;
  ck_assert_ldouble_eq(s21_exp(x_2), exp(x_2));
}

END_TEST

START_TEST(s21_exp_test14) {
  double x = S21_POS_INF;
  ck_assert_ldouble_eq(s21_exp(x), exp(x));
  double x_1 = S21_NEG_INF;
  ck_assert_ldouble_eq(s21_exp(x_1), exp(x_1));
}
END_TEST

START_TEST(s21_exp_test15) {
  for (double value = -100; value < 10; value += 1) {
    ck_assert_ldouble_eq_tol(s21_exp(value), exp(value), S21_ACCURACY);
  }
  double x = 716;
  ck_assert_ldouble_eq(s21_exp(x), exp(x));
}

END_TEST

Suite *exp_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("exp(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_exp_test1);
  tcase_add_test(tc_core, s21_exp_test2);
  tcase_add_test(tc_core, s21_exp_test3);
  tcase_add_test(tc_core, s21_exp_test4);
  tcase_add_test(tc_core, s21_exp_test5);
  tcase_add_test(tc_core, s21_exp_test6);
  tcase_add_test(tc_core, s21_exp_test7);
  tcase_add_test(tc_core, s21_exp_test8);
  tcase_add_test(tc_core, s21_exp_test9);
  tcase_add_test(tc_core, s21_exp_test10);
  tcase_add_test(tc_core, s21_exp_test11);
  // tcase_add_test(tc_core, s21_exp_test12);
  tcase_add_test(tc_core, s21_exp_test13);
  tcase_add_test(tc_core, s21_exp_test14);
  tcase_add_test(tc_core, s21_exp_test15);
  suite_add_tcase(s, tc_core);
  return s;
}
