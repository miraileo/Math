#include "s21_math.h"

long double s21_pow(double x, double n) {
  long double resPow = 1;
  if (S21_IS_NAN(x) == 1) {
    if (n != 0) return S21_NaN;
  }
  if (S21_IS_NAN(n) == 1) return S21_NaN;
  if (x == S21_POS_INF || x == -S21_POS_INF) {
    if (n < 0) return 0;
    if (n > 0) return S21_POS_INF;
    if (n == 0) return 1;
  }
  if (n == S21_POS_INF) {
    if (x != 0)
      return S21_POS_INF;
    else
      return 0;
  }
  if (n == -S21_POS_INF) {
    if (x < 0) return 0;
  }
  if (x > 0) {
    if (n == 0) {
      return 1;
    }
    if (n > 0) {
      resPow = s21_exp(n * (s21_log(x)));
    }
    if (n < 0) {
      n = -n;
      long double resNegPow = s21_exp(n * (s21_log(x)));
      resPow = 1 / resNegPow;
    }
  } else if (x < 0) {
    if (s21_fmod(n, 1) == 0) {
      if ((int)n % 2 == 0) {
        x = -x;
        resPow = s21_exp(n * (s21_log(x)));
      } else {
        x = -x;
        resPow = -s21_exp(n * (s21_log(x)));
      }
    } else {
      resPow = S21_NaN;
    }
  } else {
    if (n == 0) resPow = 1;
    if (n > 0) resPow = 0;
    if (n < 0) resPow = S21_POS_INF;
  }
  if (resPow > 100000000000) resPow = S21_POS_INF;
  return resPow;
}