#include "s21_math.h"

long double s21_asin(double x) {
  long double factorialResult = 0;
  long double factorialNumerator = 1;
  long double factorialDenumerator = 1;
  long double result = 0;
  long double poweredX = 1;
  if (x > 1 || -1 > x) return S21_NaN;
  if (x == 1) return S21_PI / 2;
  if (x == -1) return -S21_PI / 2;
  for (int i = 3; i < 3210; i++) {
    for (int j = 1; j < i; j++) {
      factorialNumerator *= j;
      j += 1;
    }
    for (int j = 2; j < i; j++) {
      factorialDenumerator *= j;
      j += 1;
    }
    factorialResult = factorialNumerator / factorialDenumerator;
    for (int j = 0; j < i; j++) {
      poweredX *= x;
    }

    result += (poweredX / (i)) * factorialResult;
    i++;
    factorialNumerator = 1;
    poweredX = 1;
    factorialDenumerator = 1;
  }
  result += x;
  return result;
}