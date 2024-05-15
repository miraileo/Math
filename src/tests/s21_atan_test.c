#include "s21_atan_test.h"

int main() {
  int errcode = 0;
  case_test(atan_suite(), &errcode);
  return errcode;
}