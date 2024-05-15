#include "s21_fabs_test.h"

int main() {
  int errcode = 0;
  case_test(fabs_suite(), &errcode);
  return errcode;
}