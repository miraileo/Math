#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res_mod = 0;
  if (x == S21_ZERO_POS && (y != 0.0 && !S21_IS_NAN(y))) {
    res_mod = S21_ZERO_POS;
  } else if (x == S21_ZERO_NEG && (y != 0 && !S21_IS_NAN(y))) {
    res_mod = S21_ZERO_NEG;
  } else if (S21_IS_POS_INF(x) || S21_IS_NEG_INF(x) || y == 0.0) {
    res_mod = S21_NaN;
  } else if ((S21_IS_POS_INF(y) || S21_IS_NEG_INF(y)) &&
             (x != S21_POS_INF || x != S21_NEG_INF)) {
    res_mod = x;
  } else if (S21_IS_NAN(y)) {
    res_mod = S21_NaN;
  } else {
    if (x < 0 || y < 0) {
      res_mod = -s21_abs(x / y);
    } else {
      res_mod = s21_abs(x / y);
    }
    res_mod = x - y * res_mod;
  }
  return res_mod;
}