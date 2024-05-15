#include "s21_sqrt_test.h"

int main() {
  int errcode = 0;
  case_test(sqrt_suite(), &errcode);
  return errcode;
}