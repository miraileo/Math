#ifndef TEST_HEADER_
#define TEST_HEADER_

#include "../s21_math.h"
#include "tests.h"

#endif

START_TEST(s21_abs_test1) { ck_assert_int_eq(s21_abs(5), abs(5)); }

END_TEST

START_TEST(s21_abs_test2) { ck_assert_int_eq(s21_abs(-5), abs(-5)); }

END_TEST

START_TEST(s21_abs_test3) {
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
}

END_TEST

START_TEST(s21_abs_test4) {
  ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN));
}

END_TEST

START_TEST(s21_abs_test5) {
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}

END_TEST
START_TEST(s21_abs_test6) {
  ck_assert_int_eq(s21_abs((int)S21_DBL_MAX), abs((int)S21_DBL_MAX));
}

END_TEST
START_TEST(s21_abs_test7) {
  ck_assert_int_eq(s21_abs((int)S21_DBL_MIN), abs((int)S21_DBL_MIN));
}

END_TEST
START_TEST(s21_abs_test8) {
  ck_assert_int_eq(s21_abs((int)S21_FLT_MAX), abs((int)S21_FLT_MAX));
}

END_TEST
START_TEST(s21_abs_test9) {
  ck_assert_int_eq(s21_abs((int)S21_FLT_MIN), abs((int)S21_FLT_MIN));
}

END_TEST

// START_TEST(s21_abs_test10) { ck_assert_int_eq(s21_abs(INT_MIN), abs(INT_MIN)); }

// END_TEST

START_TEST(s21_abs_test11) {
  for (int i = -1000; i < 1000; i += 10) {
    ck_assert_int_eq(s21_abs(i), abs(i));
  }
}

END_TEST

Suite *

abs_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("abs(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_abs_test1);
  tcase_add_test(tc_core, s21_abs_test2);
  tcase_add_test(tc_core, s21_abs_test3);
  tcase_add_test(tc_core, s21_abs_test4);
  tcase_add_test(tc_core, s21_abs_test5);
  tcase_add_test(tc_core, s21_abs_test6);
  tcase_add_test(tc_core, s21_abs_test7);
  tcase_add_test(tc_core, s21_abs_test8);
  tcase_add_test(tc_core, s21_abs_test9);
  // tcase_add_test(tc_core, s21_abs_test10);
  tcase_add_test(tc_core, s21_abs_test11);
  suite_add_tcase(s, tc_core);
  return s;
}
