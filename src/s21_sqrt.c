#include "s21_math.h"

long double s21_sqrt(double x) {
  long double resSQRT = s21_pow(x, 0.5);
  if (x == S21_POS_INF) {
    resSQRT = S21_POS_INF;
  } else if (resSQRT > DBL_MAX) {
    resSQRT = S21_NaN;
  }
  return resSQRT;
}