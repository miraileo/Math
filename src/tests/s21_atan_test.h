#ifndef TEST_HEADER_
#define TEST_HEADER_
#include "../s21_math.h"
#include "tests.h"
#endif

START_TEST(s21_atan_test1) {
  long double arr[] = {14.96, -25.1235, 0.23464, 0, 1, -1};
  for (int i = 0; i < 6; i++)
  {
    ck_assert_double_eq_tol(s21_atan(arr[i]), atan(arr[i]), S21_ACCURACY);
  }
}
END_TEST

START_TEST(s21_atan_test2) {
  ck_assert_double_eq(s21_atan(INFINITY), atan(INFINITY));
}
END_TEST

START_TEST(s21_atan_test3) {
  ck_assert_double_nan(s21_atan(NAN));
  ck_assert_double_nan(atan(NAN));
}
END_TEST

START_TEST(s21_atan_test4) {
  ck_assert_double_eq(s21_atan(-INFINITY), atan(-INFINITY));
}
END_TEST

START_TEST(s21_atan_test5) {
  for (double value = -10; value < 100; value += 0.33) {
    ck_assert_ldouble_eq_tol(s21_atan(value), atan(value), S21_ACCURACY);
  }
}
END_TEST

Suite *atan_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("atan(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_atan_test1);
  tcase_add_test(tc_core, s21_atan_test2);
  tcase_add_test(tc_core, s21_atan_test3);
  tcase_add_test(tc_core, s21_atan_test4);
  tcase_add_test(tc_core, s21_atan_test5);
  suite_add_tcase(s, tc_core);
  return s;
}