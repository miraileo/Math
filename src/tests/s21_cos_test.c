#include "s21_cos_test.h"

int main() {
  int errcode = 0;
  case_test(cos_suite(), &errcode);
  return errcode;
}