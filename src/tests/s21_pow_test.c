#include "s21_pow_test.h"

int main() {
  int errcode = 0;

  case_test(pow_suite(), &errcode);
  return errcode;
}