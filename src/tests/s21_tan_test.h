#ifndef TEST_HEADER_
#define TEST_HEADER_

#include "../s21_math.h"
#include "tests.h"

#endif
START_TEST(s21_tan_test1) {
  ck_assert_double_eq_tol(s21_tan(6987000), tan(6987000), S21_ACCURACY);
}
END_TEST

START_TEST(s21_tan_test2) {
  ck_assert_double_eq_tol(s21_tan(-14.96), tan(-14.96), S21_ACCURACY);
}
END_TEST

START_TEST(s21_tan_test3) {
  ck_assert_int_eq(S21_IS_NAN(s21_tan(INFINITY)), S21_IS_NAN(tan(INFINITY)));
}
END_TEST

START_TEST(s21_tan_test4) {
  ck_assert_int_eq(S21_IS_NAN(s21_tan(NAN)), S21_IS_NAN(tan(NAN)));
}
END_TEST

START_TEST(s21_tan_test5) {
  ck_assert_int_eq(S21_IS_NAN(s21_tan(-INFINITY)), S21_IS_NAN(tan(-INFINITY)));
}
END_TEST

START_TEST(s21_tan_test6) {
  ck_assert_double_eq_tol(s21_tan(0), tan(0), S21_ACCURACY);
}
END_TEST

START_TEST(s21_tan_test7) {
  ck_assert_double_eq_tol(s21_tan(M_PI), tan(M_PI), S21_ACCURACY);
}
END_TEST

START_TEST(s21_tan_test8) {
  for (int value = -500; value < 500; value++) {
    ck_assert_ldouble_eq_tol(s21_tan(value), tan(value), S21_ACCURACY);
  }
}
END_TEST
START_TEST(s21_tan_test9) {
  for (int value = -5000; value < 5000; value += 25) {
    ck_assert_ldouble_eq_tol(s21_tan(value), tan(value), S21_ACCURACY);
  }
}
END_TEST

Suite *

tan_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("tan(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_tan_test1);
  tcase_add_test(tc_core, s21_tan_test2);
  tcase_add_test(tc_core, s21_tan_test3);
  tcase_add_test(tc_core, s21_tan_test4);
  tcase_add_test(tc_core, s21_tan_test5);
  tcase_add_test(tc_core, s21_tan_test6);
  tcase_add_test(tc_core, s21_tan_test7);
  tcase_add_test(tc_core, s21_tan_test8);
  tcase_add_test(tc_core, s21_tan_test9);
  suite_add_tcase(s, tc_core);
  return s;
}