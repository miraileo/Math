#include "s21_math.h"

long double s21_ceil(double x) {
  long double result = (long long int)x;
  if (x == S21_ZERO_POS) {
    result = S21_ZERO_POS;
  } else if (x == S21_ZERO_NEG) {
    result = S21_ZERO_NEG;
  } else if (S21_IS_POS_INF(x)) {
    result = S21_POS_INF;
  } else if (S21_IS_NEG_INF(x)) {
    result = S21_NEG_INF;
  } else if (x != result) {
    result = s21_floor(x) + 1;
  }
  return result;
}