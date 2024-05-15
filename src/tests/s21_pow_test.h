#ifndef TEST_HEADER_
#define TEST_HEADER_

#include "../s21_math.h"
#include "tests.h"

#endif

START_TEST(s21_pow_test1) {
  ck_assert_double_eq_tol(s21_pow(20, 0.4), pow(20, 0.4), 0.000001);
}

END_TEST

START_TEST(s21_pow_test2) {
  ck_assert_int_eq(S21_IS_NAN(s21_pow(-20, 0.4)), S21_IS_NAN(pow(-20, 0.4)));
}

END_TEST

START_TEST(s21_pow_test3) {
  ck_assert_double_eq(s21_pow(INFINITY, INFINITY), pow(INFINITY, INFINITY));
}

END_TEST

START_TEST(s21_pow_test4) {
  ck_assert_double_eq(s21_pow(-INFINITY, -INFINITY), pow(-INFINITY, -INFINITY));
}

END_TEST

START_TEST(s21_pow_test5) {
  ck_assert_double_nan(s21_pow(NAN, NAN));
  ck_assert_double_nan(pow(NAN, NAN));
}

END_TEST

START_TEST(s21_pow_test6) {
  ck_assert_double_nan(s21_pow(INFINITY, NAN));
  ck_assert_double_nan(pow(INFINITY, NAN));
}

END_TEST

START_TEST(s21_pow_test7) {
  ck_assert_double_nan(s21_pow(NAN, INFINITY));
  ck_assert_double_nan(pow(NAN, INFINITY));
}

END_TEST

START_TEST(s21_pow_test8) {
  ck_assert_double_nan(s21_pow(-INFINITY, NAN));
  ck_assert_double_nan(pow(-INFINITY, NAN));
}

END_TEST

START_TEST(s21_pow_test9) {
  ck_assert_double_nan(s21_pow(NAN, -INFINITY));
  ck_assert_double_nan(pow(NAN, -INFINITY));
}

END_TEST

START_TEST(s21_pow_test10) {
  ck_assert_double_eq(s21_pow(-INFINITY, INFINITY), pow(-INFINITY, INFINITY));
}

END_TEST

START_TEST(s21_pow_test11) {
  ck_assert_double_eq(s21_pow(INFINITY, -INFINITY), pow(INFINITY, -INFINITY));
}

END_TEST

START_TEST(s21_pow_test12) {
  ck_assert_double_eq_tol(s21_pow(12.69, 0), pow(12.69, 0), 0.000001);
}

END_TEST

START_TEST(s21_pow_test13) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 3), pow(-20.63, 3), 0.000001);
}

END_TEST

START_TEST(s21_pow_test14) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 6), pow(-20.63, 6), 0.000001);
}

END_TEST

START_TEST(s21_pow_test15) {
  ck_assert_double_eq_tol(s21_pow(-INFINITY, 0), pow(-INFINITY, 0), 0.000001);
}

END_TEST

START_TEST(s21_pow_test16) {
  ck_assert_double_eq_tol(s21_pow(INFINITY, 0), pow(INFINITY, 0), 0.000001);
}

END_TEST

START_TEST(s21_pow_test17) {
  ck_assert_double_eq_tol(s21_pow(NAN, 0), pow(NAN, 0), 0.000001);
}

END_TEST

START_TEST(s21_pow_test18) {
  ck_assert_double_eq(s21_pow(0, -INFINITY), pow(0, -INFINITY));
}

END_TEST

START_TEST(s21_pow_test19) {
  ck_assert_double_eq_tol(s21_pow(0, INFINITY), pow(0, INFINITY), 0.000001);
}

END_TEST

START_TEST(s21_pow_test20) {
  ck_assert_double_nan(s21_pow(0, NAN));
  ck_assert_double_nan(pow(0, NAN));
}

END_TEST

START_TEST(s21_pow_test21) { ck_assert_double_eq(s21_pow(0, 0), pow(0, 0)); }

END_TEST

START_TEST(s21_pow_test22) {
  ck_assert_double_eq(s21_pow(16894.2629, 1545), pow(16894.2629, 1545));
}

END_TEST

START_TEST(s21_pow_test23) {
  ck_assert_double_eq(s21_pow(16894.2629, -1545), pow(16894.2629, -1545));
}

END_TEST

START_TEST(s21_pow_test24) {
  ck_assert_double_eq(s21_pow(-16894.2629, 1545), pow(-16894.2629, 1545));
}

END_TEST

START_TEST(s21_pow_test25) {
  ck_assert_double_eq(s21_pow(-16894.2629, -1545), pow(-16894.2629, -1545));
}

END_TEST

START_TEST(s21_pow_test26) {
  ck_assert_int_eq(S21_IS_NAN(s21_pow(-2, 0.4)), S21_IS_NAN(pow(-2, 0.4)));
}

END_TEST

START_TEST(s21_pow_test27) {
  ck_assert_int_eq(S21_IS_NAN(s21_pow(20, 1.4)), S21_IS_NAN(pow(20, 1.4)));
}

END_TEST

START_TEST(s21_pow_test28) {
  ck_assert_int_eq(S21_IS_NAN(s21_pow(2, 0.4)), S21_IS_NAN(pow(2, 0.4)));
}

END_TEST

START_TEST(s21_pow_test29) {
  double x_ZERO = 0.0;
  double y_NEG_ZERO = -0.0;
  ck_assert_ldouble_eq(s21_pow(x_ZERO, x_ZERO), pow(x_ZERO, x_ZERO));
  ck_assert_ldouble_eq(s21_pow(x_ZERO, y_NEG_ZERO), pow(x_ZERO, y_NEG_ZERO));
  ck_assert_ldouble_eq(s21_pow(y_NEG_ZERO, x_ZERO), pow(y_NEG_ZERO, x_ZERO));
  ck_assert_ldouble_eq(s21_pow(y_NEG_ZERO, y_NEG_ZERO),
                       pow(y_NEG_ZERO, y_NEG_ZERO));
}

END_TEST

START_TEST(s21_pow_test30) {
  double x[14] = {1.25,         -77.73, 8,  7,  -32,      -33,
                  2.2,          -5.6,   -9, 27, -S21_NaN, S21_POS_INF,
                  -S21_POS_INF, S21_NaN};
  double zero = 0;
  double pow_rez = 0;
  for (int i = 0; i < 13; i++) {
    ck_assert_ldouble_eq_tol(s21_pow(x[i], zero), pow(x[i], zero),
                             S21_ACCURACY);
    pow_rez = pow(zero, x[i]);
    if (pow_rez != pow_rez)
      ck_assert_ldouble_nan(s21_pow(zero, x[i]));
    else
      ck_assert_ldouble_eq(s21_pow(zero, x[i]), pow(zero, x[i]));
  }
}

END_TEST

START_TEST(s21_pow_test31) {
  double x[14] = {1.25,         -77.73, 8,  7,  -53,      72,
                  2.2,          -5.6,   -9, 53, -S21_NaN, S21_POS_INF,
                  -S21_POS_INF, S21_NaN};
  double zero = -0;
  double pow_rez = 0;

  for (int i = 0; i < 12; i++) {
    pow_rez = pow(zero, x[i]);
    ck_assert_ldouble_eq_tol(s21_pow(x[i], zero), pow(x[i], zero),
                             S21_ACCURACY);
    if (pow_rez != pow_rez)
      ck_assert_ldouble_nan(s21_pow(zero, x[i]));
    else
      ck_assert_ldouble_eq(s21_pow(zero, x[i]), pow(zero, x[i]));
  }
}

END_TEST

START_TEST(s21_pow_test32) {
  double x_NAN[2] = {S21_NaN, -S21_NaN};
  double y_digit[7] = {7.77,         -7.77,   S21_POS_INF,
                       -S21_POS_INF, DBL_MAX, DBL_MIN};
  int k = 0;
  for (int i = 0; i < 2; i++) {
    k = 0;
    for (int j = 0; j < 6; j++) {
      ck_assert_ldouble_nan(s21_pow(x_NAN[i], y_digit[j]));
      ck_assert_ldouble_nan(s21_pow(y_digit[j], x_NAN[i]));
      if (k < 2) ck_assert_ldouble_nan(s21_pow(x_NAN[i], x_NAN[j]));
      k++;
    }
  }
}

END_TEST

START_TEST(s21_pow_test33) {
  double one = -1;
  double x[7] = {1, 3.23, -3.23, -S21_NaN, S21_POS_INF, -S21_POS_INF, S21_NaN};
  double pow_rez = 0;
  double pow_rez_1 = 0;
  for (int i = 0; i < 7; i++) {
    pow_rez = pow(one, x[i]);
    pow_rez_1 = pow(x[i], one);
    if (pow_rez != pow_rez)
      ck_assert_ldouble_nan(s21_pow(one, x[i]));
    else
      ck_assert_ldouble_eq_tol(s21_pow(one, x[i]), pow(one, x[i]),
                               S21_ACCURACY);

    if (pow_rez_1 != pow_rez_1)
      ck_assert_ldouble_nan(s21_pow(x[i], one));
    else
      ck_assert_ldouble_eq_tol(s21_pow(x[i], one), pow(x[i], one),
                               S21_ACCURACY);
  }
}

END_TEST

START_TEST(s21_pow_test34) {
  double pow_rez = 0;
  for (double x = 0; x < 6; x += 1) {
    for (double y = 0; y < 12; y += 0.1) {
      ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), S21_ACCURACY);
    }
  }
  for (double x_1 = -1; x_1 > -6; x_1 -= 0.1) {
    for (double y_1 = 0; y_1 > -23; y_1 -= 0.1) {
      pow_rez = pow(x_1, y_1);
      if (pow_rez != pow_rez)
        ck_assert_ldouble_nan(s21_pow(x_1, y_1));
      else
        ck_assert_ldouble_eq_tol(s21_pow(x_1, y_1), pow(x_1, y_1),
                                 S21_ACCURACY);
    }
  }
}

END_TEST

START_TEST(s21_pow_test35) {
  double x = 1000;
  double y = 1000;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
}

END_TEST

// START_TEST(s21_pow_test36) {
//   double x_INT_MAX = INT_MAX;
//   double y_INT_MIN = INT_MIN;

//   ck_assert_ldouble_eq(s21_pow(x_INT_MAX, x_INT_MAX),
//                        pow(x_INT_MAX, x_INT_MAX));
//   ck_assert_ldouble_eq(s21_pow(x_INT_MAX, y_INT_MIN),
//                        pow(x_INT_MAX, y_INT_MIN));
//   ck_assert_ldouble_eq(s21_pow(y_INT_MIN, x_INT_MAX),
//                        pow(y_INT_MIN, x_INT_MAX));
//   ck_assert_ldouble_eq(s21_pow(y_INT_MIN, y_INT_MIN),
//                        pow(y_INT_MIN, y_INT_MIN));
// }

START_TEST(s21_pow_test37) {
  double x_DBL[3] = {DBL_MAX, -DBL_MAX, DBL_MIN};
  double pow_rez = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      pow_rez = pow(x_DBL[i], x_DBL[j]);
      if (pow_rez != pow_rez)
        ck_assert_ldouble_nan(s21_pow(x_DBL[i], x_DBL[j]));
      else if (s21_fabs(pow_rez) == s21_fabs(S21_POS_INF))
        ck_assert_ldouble_eq(s21_pow(x_DBL[i], x_DBL[j]),
                             pow(x_DBL[i], x_DBL[j]));
      else
        ck_assert_ldouble_eq_tol(s21_pow(x_DBL[i], x_DBL[j]),
                                 pow(x_DBL[i], x_DBL[j]), S21_ACCURACY);
    }
  }
}

END_TEST

Suite *

pow_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("pow(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_pow_test1);
  tcase_add_test(tc_core, s21_pow_test2);
  tcase_add_test(tc_core, s21_pow_test3);
  tcase_add_test(tc_core, s21_pow_test4);
  tcase_add_test(tc_core, s21_pow_test5);
  tcase_add_test(tc_core, s21_pow_test6);
  tcase_add_test(tc_core, s21_pow_test7);
  tcase_add_test(tc_core, s21_pow_test8);
  tcase_add_test(tc_core, s21_pow_test9);
  tcase_add_test(tc_core, s21_pow_test10);
  tcase_add_test(tc_core, s21_pow_test11);
  tcase_add_test(tc_core, s21_pow_test12);
  tcase_add_test(tc_core, s21_pow_test13);
  tcase_add_test(tc_core, s21_pow_test14);
  tcase_add_test(tc_core, s21_pow_test15);
  tcase_add_test(tc_core, s21_pow_test16);
  tcase_add_test(tc_core, s21_pow_test17);
  tcase_add_test(tc_core, s21_pow_test18);
  tcase_add_test(tc_core, s21_pow_test19);
  tcase_add_test(tc_core, s21_pow_test20);
  tcase_add_test(tc_core, s21_pow_test21);
  tcase_add_test(tc_core, s21_pow_test22);
  tcase_add_test(tc_core, s21_pow_test23);
  tcase_add_test(tc_core, s21_pow_test24);
  tcase_add_test(tc_core, s21_pow_test25);
  tcase_add_test(tc_core, s21_pow_test26);
  tcase_add_test(tc_core, s21_pow_test27);
  tcase_add_test(tc_core, s21_pow_test28);
  tcase_add_test(tc_core, s21_pow_test29);
  tcase_add_test(tc_core, s21_pow_test30);
  tcase_add_test(tc_core, s21_pow_test31);
  tcase_add_test(tc_core, s21_pow_test32);
  //tcase_add_test(tc_core, s21_pow_test33);
  tcase_add_test(tc_core, s21_pow_test34);
  tcase_add_test(tc_core, s21_pow_test35);
  // tcase_add_test(tc_core, s21_pow_test36);
  //tcase_add_test(tc_core, s21_pow_test37);
  suite_add_tcase(s, tc_core);
  return s;
}
