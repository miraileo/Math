#include "s21_tan_test.h"

int main() {
  int errcode = 0;
  case_test(tan_suite(), &errcode);
  return errcode;
}