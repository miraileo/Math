#include "s21_exp_test.h"

int main() {
  int errcode = 0;
  case_test(exp_suite(), &errcode);
  return errcode;
}