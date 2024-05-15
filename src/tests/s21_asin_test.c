#include "s21_asin_test.h"

int main() {
  int errcode = 0;
  case_test(asin_suite(), &errcode);
  return errcode;
}