#ifndef TEST_HEADER_
#define TEST_HEADER_
#include "../s21_math.h"
#include "tests.h"
#endif

START_TEST(s21_asin_test1) {
  ck_assert_double_eq_tol(s21_asin(0.156), asin(0.156), S21_ACCURACY);
}
END_TEST

START_TEST(s21_asin_test2) {
  ck_assert_double_eq_tol(s21_asin(1), asin(1), S21_ACCURACY);
}
END_TEST

START_TEST(s21_asin_test3) {
  ck_assert_double_eq_tol(s21_asin(-1), asin(-1), S21_ACCURACY);
}
END_TEST

START_TEST(s21_asin_test4) {
  ck_assert_double_nan(s21_asin(INFINITY));
  ck_assert_double_nan(asin(INFINITY));
}
END_TEST

START_TEST(s21_asin_test5) {
  ck_assert_double_nan(s21_asin(NAN));
  ck_assert_double_nan(asin(NAN));
}
END_TEST

START_TEST(s21_asin_test6) {
  ck_assert_double_nan(s21_asin(-INFINITY));
  ck_assert_double_nan(asin(-INFINITY));
}
END_TEST

START_TEST(s21_asin_test7) {
  ck_assert_double_nan(s21_asin(16));
  ck_assert_double_nan(asin(16));
}
END_TEST

START_TEST(s21_asin_test8) {
  ck_assert_double_nan(s21_asin(-16));
  ck_assert_double_nan(asin(-16));
}
END_TEST

START_TEST(s21_asin_test9) {
  ck_assert_double_eq_tol(s21_asin(0), asin(0), S21_ACCURACY);
}
END_TEST

START_TEST(s21_asin_test10) {
  for (double value = -1; value <= 1; value += 0.03) {
    ck_assert_ldouble_eq_tol(s21_asin(value), asin(value), S21_ACCURACY);
  }
}
END_TEST

Suite *asin_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("asin(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_asin_test1);
  tcase_add_test(tc_core, s21_asin_test2);
  tcase_add_test(tc_core, s21_asin_test3);
  tcase_add_test(tc_core, s21_asin_test4);
  tcase_add_test(tc_core, s21_asin_test5);
  tcase_add_test(tc_core, s21_asin_test6);
  tcase_add_test(tc_core, s21_asin_test7);
  tcase_add_test(tc_core, s21_asin_test8);
  tcase_add_test(tc_core, s21_asin_test9);
  tcase_add_test(tc_core, s21_asin_test10);
  suite_add_tcase(s, tc_core);
  return s;
}