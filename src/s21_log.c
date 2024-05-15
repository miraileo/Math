#include "s21_math.h"

long double s21_log(double x) {
  long double compare = 1;
  long double res_log = compare;
  int exponential = 0;
  if (x == S21_ZERO_POS || x == S21_ZERO_NEG) {
    res_log = S21_NEG_INF;
  } else if (x == 1) {
    res_log = S21_ZERO_POS;
  } else if (S21_IS_NAN(x)) {
    res_log = S21_NaN;
  } else if (S21_IS_POS_INF(x)) {
    res_log = S21_POS_INF;
  } else if (x < 0.0) {
    res_log = S21_NaN;
  } else {
    for (; x >= S21_EXP; exponential++) {
      x /= S21_EXP;
    }
    for (int i = 0; i < 100; i++) {
      compare = res_log;
      res_log = compare + 2 * ((x - s21_exp(compare)) / (x + s21_exp(compare)));
    }
    res_log += exponential;
  }

  return res_log;
}