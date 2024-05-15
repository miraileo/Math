#include "s21_math.h"

long double s21_sin(double x) {
  long double result = 0;
  long double temp_result = 0;
  long double factorial = 1.0;
  if (x == S21_ZERO_POS) {
    result = S21_ZERO_POS;
  } else if (x == S21_ZERO_NEG) {
    result = S21_ZERO_NEG;
  }
  if (S21_IS_POS_INF(x) || S21_IS_NEG_INF(x) || S21_IS_NAN(x)) {
    result = S21_NaN;
  } else {
    x = s21_fmod(x, 2.0 * S21_PI);
    while (x > 2.0 * S21_PI) {
      x -= 2.0 * S21_PI;
    }
    while (x < -2.0 * S21_PI) {
      x += 2.0 * S21_PI;
    }
    result = x;
    temp_result = x;
    for (int i = 0; i < 500; i++) {
      temp_result = (-temp_result * x * x) /
                    ((2.0 * factorial + 1.0) * (2.0 * factorial));
      result = result + temp_result;
      factorial++;
    }
  }
  return result;
}