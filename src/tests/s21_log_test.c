#include "s21_log_test.h"

int main() {
  int errcode = 0;
  case_test(log_suite(), &errcode);
  return errcode;
}