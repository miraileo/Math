#include "s21_sin_test.h"

int main() {
  int errcode = 0;
  case_test(sin_suite(), &errcode);
  return errcode;
}