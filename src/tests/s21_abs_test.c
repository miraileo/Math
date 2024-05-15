
#include "s21_abs_test.h"

int main() {
  int errcode = 0;
  case_test(abs_suite(), &errcode);
  return errcode;
}