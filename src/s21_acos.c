#include "s21_math.h"

long double s21_acos(double x) {
  long double res_acos;
  if (x == 1) {
    res_acos = S21_ZERO_POS;
  }
  if (x <= 1.0 && x >= -1.0) {
    res_acos = S21_PI / 2.0 - s21_asin(x);
  } else {
    res_acos = S21_NaN;
  }
  return res_acos;
}