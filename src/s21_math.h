#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S21_EPS 1e-7
#define S21_PI 3.14159265358979323846
#define S21_EXP 2.71828182845904523536
#define S21_LN2 0.69314718055994530941
#define S21_MAX 1e100
#define S21_POS_INF 1.0 / 0.0L
#define S21_NEG_INF -1.0 / 0.0L
#define S21_NaN 0. / 0.
#define S21_IS_NAN(x) (x != x)
#define S21_IS_POS_INF(x) (x == S21_POS_INF)
#define S21_IS_NEG_INF(x) (x == S21_NEG_INF)
#define S21_SMALL_EXP 1e-77
#define S21_45_DEGREE_IN_RAD 0.785398163
#define S21_HUGE_VALUE_FLOAT HUGE_VALUE_FLOAT
#define S21_ZERO_NEG -0.000000
#define S21_ZERO_POS 0.000000
#define S21_ACCURACY 1e-06

#define DBL_MAX 1.7976931348623158e+308
#define DBL_MIN 2.2250738585072014e-308

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double x, double n);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif