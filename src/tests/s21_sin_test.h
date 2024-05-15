#ifndef TEST_HEADER_
#define TEST_HEADER_

#include "../s21_math.h"
#include "tests.h"

#endif

START_TEST(s21_sin_test1) {
  ck_assert_double_eq_tol(s21_sin(1000000), sin(1000000), S21_ACCURACY);
}

END_TEST

START_TEST(s21_sin_test2) {
  ck_assert_double_eq_tol(s21_sin(-14.96), sin(-14.96), S21_ACCURACY);
}

END_TEST

START_TEST(s21_sin_test3) {
  ck_assert_int_eq(S21_IS_NAN(s21_sin(INFINITY)), S21_IS_NAN(sin(INFINITY)));
}

END_TEST

START_TEST(s21_sin_test4) {
  ck_assert_double_nan(s21_sin(NAN));
  ck_assert_double_nan(sin(NAN));
}

END_TEST

START_TEST(s21_sin_test5) {
  ck_assert_int_eq(S21_IS_NAN(s21_sin(-INFINITY)), S21_IS_NAN(sin(-INFINITY)));
}

END_TEST

START_TEST(s21_sin_test6) {
  ck_assert_double_eq_tol(s21_sin(M_PI), sin(M_PI), S21_ACCURACY);
}

END_TEST

START_TEST(s21_sin_test7) {
  ck_assert_double_eq_tol(s21_sin(M_PI_2), sin(M_PI_2), S21_ACCURACY);
}

END_TEST

START_TEST(s21_sin_test8) {
  ck_assert_double_eq_tol(s21_sin(0), sin(0), S21_ACCURACY);
}

END_TEST

START_TEST(s21_sin_test9) {
  ck_assert_double_eq_tol(s21_sin(-M_PI_2), sin(-M_PI_2), S21_ACCURACY);
}

END_TEST

START_TEST(s21_sin_test10) {
  ck_assert_double_eq_tol(s21_sin(-12), sin(-12), S21_ACCURACY);
}

START_TEST(s21_sin_test11) {
  ck_assert_double_eq_tol(s21_sin(-1), sin(-1), S21_ACCURACY);
}

START_TEST(s21_sin_test12) {
  ck_assert_double_eq_tol(s21_sin(-00), sin(-00), S21_ACCURACY);
}

START_TEST(s21_sin_test13) {
  for (double value = -100; value <= 100; value += 0.01) {
    ck_assert_ldouble_eq_tol(s21_sin(value), sin(value), S21_ACCURACY);
  }
}
END_TEST
START_TEST(s21_sin_test14) {
  for (double value = -10000; value <= 10000; value += 14.1123) {
    ck_assert_ldouble_eq_tol(s21_sin(value), sin(value), S21_ACCURACY);
  }
}
END_TEST

Suite *

sin_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("sin(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_sin_test1);
  tcase_add_test(tc_core, s21_sin_test2);
  tcase_add_test(tc_core, s21_sin_test3);
  tcase_add_test(tc_core, s21_sin_test4);
  tcase_add_test(tc_core, s21_sin_test5);
  tcase_add_test(tc_core, s21_sin_test6);
  tcase_add_test(tc_core, s21_sin_test7);
  tcase_add_test(tc_core, s21_sin_test8);
  tcase_add_test(tc_core, s21_sin_test9);
  tcase_add_test(tc_core, s21_sin_test10);
  tcase_add_test(tc_core, s21_sin_test11);
  tcase_add_test(tc_core, s21_sin_test12);
  tcase_add_test(tc_core, s21_sin_test13);
  tcase_add_test(tc_core, s21_sin_test14);
  suite_add_tcase(s, tc_core);
  return s;
}
