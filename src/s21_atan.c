#include "s21_math.h"

long double s21_atan(double x) {
  long double result = 0.0;
  int onePowI = -1;
  long double xPow2nP1 = 1;
  long double tmp = x;
  if (x == S21_POS_INF || x == -S21_POS_INF)
    return x > 0 ? S21_PI / 2 : -S21_PI / 2;
  if (x == 1 || x == -1) return x > 0 ? S21_PI / 4 : -S21_PI / 4;
  if (x < 1 && x > -1)
    for (int i = 0; i < 700; i++) {
      onePowI *= -1;
      xPow2nP1 = 1;
      for (int j = 0; j < ((2 * i) + 1); j++) {
        xPow2nP1 *= x;
      }
      result += (onePowI * xPow2nP1) / ((2 * i) + 1);
    }
  else {
    for (int i = 0; i < 700; i++) {
      onePowI *= -1;
      for (int j = 0; j > ((-2 * i) - 1); j--) {
        xPow2nP1 *= (1 / x);
      }

      if (x > 0) result += ((onePowI * xPow2nP1) / ((2 * i) + 1));
      if (x < 0) result -= ((onePowI * xPow2nP1) / ((2 * i) + 1));
      if (i == 699) {
        result = (S21_PI * (tmp / (2 * x))) - result;
      }
      xPow2nP1 = 1;
    }
  }
  return x <= -1 ? -result : result;
}
