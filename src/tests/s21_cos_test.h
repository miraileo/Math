#ifndef TEST_HEADER_
#define TEST_HEADER_
#include "../s21_math.h"
#include "tests.h"
#endif
START_TEST(s21_cos_test1) {
  ck_assert_double_eq_tol(s21_cos(1200000), cos(1200000), S21_ACCURACY);
}
END_TEST

START_TEST(s21_cos_test2) {
  ck_assert_double_eq_tol(s21_cos(-14.96), cos(-14.96), S21_ACCURACY);
}
END_TEST

START_TEST(s21_cos_test3) {
  ck_assert_int_eq(S21_IS_NAN(s21_cos(-14.96)), S21_IS_NAN(cos(-14.96)));
}
END_TEST

START_TEST(s21_cos_test4) {
  ck_assert_int_eq(S21_IS_NAN(s21_cos(NAN)), S21_IS_NAN(cos(NAN)));
}
END_TEST

START_TEST(s21_cos_test5) {
  ck_assert_int_eq(S21_IS_NAN(s21_cos(-INFINITY)), S21_IS_NAN(cos(-INFINITY)));
}
END_TEST

START_TEST(s21_cos_test6) {
  ck_assert_double_eq_tol(s21_cos(0), cos(0), S21_ACCURACY);
}
END_TEST

START_TEST(s21_cos_test7) {
  ck_assert_double_eq_tol(s21_cos(M_PI_2), cos(M_PI_2), S21_ACCURACY);
}
END_TEST

START_TEST(s21_cos_test8) {
  ck_assert_double_eq_tol(s21_cos(-M_PI_2), cos(-M_PI_2), S21_ACCURACY);
}
END_TEST

START_TEST(s21_cos_test9) {
  ck_assert_double_eq_tol(s21_cos(M_PI), cos(M_PI), S21_ACCURACY);
}
END_TEST

START_TEST(s21_cos_test10) {
  for (double value = -100; value <= 100; value += 0.01) {
    ck_assert_ldouble_eq_tol(s21_cos(value), cos(value), S21_ACCURACY);
  }
}
END_TEST
START_TEST(s21_cos_test11) {
  for (double value = -10000; value <= 10000; value += 14.1123) {
    ck_assert_ldouble_eq_tol(s21_cos(value), cos(value), S21_ACCURACY);
  }
}
END_TEST

Suite *cos_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("cos(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_cos_test1);
  tcase_add_test(tc_core, s21_cos_test2);
  tcase_add_test(tc_core, s21_cos_test3);
  tcase_add_test(tc_core, s21_cos_test4);
  tcase_add_test(tc_core, s21_cos_test5);
  tcase_add_test(tc_core, s21_cos_test6);
  tcase_add_test(tc_core, s21_cos_test7);
  tcase_add_test(tc_core, s21_cos_test8);
  tcase_add_test(tc_core, s21_cos_test9);
  tcase_add_test(tc_core, s21_cos_test10);
  tcase_add_test(tc_core, s21_cos_test11);
  suite_add_tcase(s, tc_core);
  return s;
}
