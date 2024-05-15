#include "../s21_math.h"
#include "tests.h"

START_TEST(s21_ceil_test1) {
  ck_assert_double_eq_tol(s21_ceil(-0.1), ceil(-0.1), ACCURACY);
}
END_TEST

START_TEST(s21_ceil_test2) {
  ck_assert_double_eq_tol(s21_ceil(-213.3), ceil(-213.3), ACCURACY);
}
END_TEST

START_TEST(s21_ceil_test3) {
  ck_assert_double_eq(s21_ceil(INFINITY), ceil(INFINITY));
}
END_TEST

START_TEST(s21_ceil_test4) {
  ck_assert_double_nan(s21_ceil(NAN));
  ck_assert_double_nan(ceil(NAN));
}
END_TEST

START_TEST(s21_ceil_test5) {
  ck_assert_double_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(s21_ceil_test6) {
  ck_assert_double_eq_tol(s21_ceil(50), ceil(50), ACCURACY);
}
END_TEST

START_TEST(s21_ceil_test7) {
  ck_assert_double_eq_tol(s21_ceil(-0.), ceil(-0.), ACCURACY);
}
END_TEST
START_TEST(s21_ceil_test8) {
  ck_assert_double_eq_tol(s21_ceil(10.9999), ceil(10.9999), ACCURACY);
}
END_TEST
START_TEST(s21_ceil_test9) {
  ck_assert_double_eq_tol(s21_ceil(ACCURACY), ceil(ACCURACY), ACCURACY);
}
END_TEST
START_TEST(s21_ceil_test10) {
  ck_assert_double_eq_tol(s21_ceil(1.000001), ceil(1.000001), ACCURACY);
}
END_TEST
START_TEST(s21_ceil_test11) {
  ck_assert_double_eq_tol(s21_ceil(50.14), ceil(50.14), ACCURACY);
}
END_TEST

Suite *ceil_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("ceil(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_ceil_test1);
  tcase_add_test(tc_core, s21_ceil_test2);
  tcase_add_test(tc_core, s21_ceil_test3);
  tcase_add_test(tc_core, s21_ceil_test4);
  tcase_add_test(tc_core, s21_ceil_test5);
  tcase_add_test(tc_core, s21_ceil_test6);
  tcase_add_test(tc_core, s21_ceil_test7);
  tcase_add_test(tc_core, s21_ceil_test8);
  tcase_add_test(tc_core, s21_ceil_test9);
  tcase_add_test(tc_core, s21_ceil_test10);
  tcase_add_test(tc_core, s21_ceil_test11);
  suite_add_tcase(s, tc_core);
  return s;
}

int main() {
  int errcode = 0;
  case_test(ceil_suite(), &errcode);
  return errcode;
}