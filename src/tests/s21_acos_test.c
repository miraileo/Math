#include "s21_acos_test.h"

int main() {
  int errcode = 0;
  case_test(acos_suite(), &errcode);
  return errcode;
}