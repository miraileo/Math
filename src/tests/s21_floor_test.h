#ifndef TEST_HEADER_
#define TEST_HEADER_
#include "../s21_math.h"
#include "tests.h"
#endif

START_TEST(s21_floor_test1) {
  ck_assert_double_eq_tol(s21_floor(-0.8), floor(-0.8), S21_ACCURACY);
}
END_TEST

START_TEST(s21_floor_test2) {
  ck_assert_double_eq_tol(s21_floor(0.8), floor(0.8), S21_ACCURACY);
}
END_TEST

START_TEST(s21_floor_test3) {
  ck_assert_double_eq_tol(s21_floor(-10.23), floor(-10.23), S21_ACCURACY);
}
END_TEST

START_TEST(s21_floor_test4) {
  ck_assert_double_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(s21_floor_test5) {
  ck_assert_double_nan(s21_floor(NAN));
  ck_assert_double_nan(floor(NAN));
}
END_TEST

START_TEST(s21_floor_test6) {
  ck_assert_double_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(s21_floor_test7) {
  ck_assert_double_eq_tol(s21_floor(-1200), floor(-1200), S21_ACCURACY);
}
END_TEST

START_TEST(s21_floor_test8) {
  for (double value = -1234; value < 4321; value += 16.009) {
    ck_assert_double_eq_tol(s21_floor(value), floor(value), S21_ACCURACY);
  }
}
END_TEST

Suite *floor_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("floor(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_floor_test1);
  tcase_add_test(tc_core, s21_floor_test2);
  tcase_add_test(tc_core, s21_floor_test3);
  tcase_add_test(tc_core, s21_floor_test4);
  tcase_add_test(tc_core, s21_floor_test5);
  tcase_add_test(tc_core, s21_floor_test6);
  tcase_add_test(tc_core, s21_floor_test7);
  tcase_add_test(tc_core, s21_floor_test8);
  suite_add_tcase(s, tc_core);
  return s;
}
