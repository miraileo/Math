#include "s21_math.h"

long double s21_exp(double x) {
  long double res_exp = 1.0;
  long double cur = 1.0;
  unsigned long int n = 1;

  if (x == S21_ZERO_POS || x == S21_ZERO_NEG) {
    res_exp = 1;
  } else if (S21_IS_POS_INF(x)) {
    res_exp = S21_POS_INF;
  } else if (S21_IS_NEG_INF(x)) {
    res_exp = S21_ZERO_POS;
  } else {
    long double a = x;
    if (x < 0.0) {
      a = -x;
    }
    while (n < 1000) {
      cur *= a / n++;
      res_exp += cur;
    }
    if (x < 0.0) {
      res_exp = 1 / res_exp;
    }
    if (res_exp > DBL_MAX) {
      res_exp = S21_POS_INF;
    }
  }
  return res_exp;
}