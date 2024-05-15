#ifndef TEST_HEADER_
#define TEST_HEADER_
#include "../s21_math.h"
#include "tests.h"
#endif
START_TEST(s21_fabs_test1) {
  ck_assert_double_eq_tol(s21_fabs(568.36), fabs(568.36), 0.000001);
}
END_TEST

START_TEST(s21_fabs_test2) {
  ck_assert_double_eq_tol(s21_fabs(-14720.5689), fabs(-14720.5689), 0.000001);
}
END_TEST

START_TEST(s21_fabs_test3) {
  ck_assert_double_eq(s21_fabs(INFINITY), fabs(INFINITY));
}
END_TEST

START_TEST(s21_fabs_test4) {
  ck_assert_double_nan(s21_fabs(NAN));
  ck_assert_double_nan(fabs(NAN));
}
END_TEST

START_TEST(s21_fabs_test5) {
  ck_assert_double_eq(s21_fabs(-INFINITY), fabs(-INFINITY));
}
END_TEST

START_TEST(s21_fabs_test6) {
  ck_assert_double_eq(s21_fabs(S21_DBL_MAX), fabs(S21_DBL_MAX));
}
END_TEST
START_TEST(s21_fabs_test7) {
  ck_assert_double_eq(s21_fabs(S21_DBL_MIN), fabs(S21_DBL_MIN));
}
END_TEST
START_TEST(s21_fabs_test8) {
  ck_assert_double_eq(s21_fabs(S21_FLT_MAX), fabs(S21_FLT_MAX));
}
END_TEST
START_TEST(s21_fabs_test9) {
  ck_assert_double_eq(s21_fabs(S21_FLT_MIN), fabs(S21_FLT_MIN));
}
END_TEST

START_TEST(s21_fabs_test10) {
  for (double value = -1000; value < 1000; value += 5.1234) {
    ck_assert_ldouble_eq_tol(s21_fabs(value), fabs(value), S21_ACCURACY);
  }
}

Suite *fabs_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("fabs(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_fabs_test1);
  tcase_add_test(tc_core, s21_fabs_test2);
  tcase_add_test(tc_core, s21_fabs_test3);
  tcase_add_test(tc_core, s21_fabs_test4);
  tcase_add_test(tc_core, s21_fabs_test5);
  tcase_add_test(tc_core, s21_fabs_test6);
  tcase_add_test(tc_core, s21_fabs_test7);
  tcase_add_test(tc_core, s21_fabs_test8);
  tcase_add_test(tc_core, s21_fabs_test9);
  tcase_add_test(tc_core, s21_fabs_test10);
  suite_add_tcase(s, tc_core);
  return s;
}