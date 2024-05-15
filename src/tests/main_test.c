#include "main_test.h"

int main() {
  int errcode = 0;
  case_test(abs_suite(), &errcode);
  case_test(acos_suite(), &errcode);
  case_test(asin_suite(), &errcode);
  case_test(atan_suite(), &errcode);
  case_test(ceil_suite(), &errcode);
  case_test(cos_suite(), &errcode);
  case_test(exp_suite(), &errcode);
  case_test(fabs_suite(), &errcode);
  case_test(floor_suite(), &errcode);
  case_test(fmod_suite(), &errcode);
  case_test(log_suite(), &errcode);
  case_test(pow_suite(), &errcode);
  case_test(sin_suite(), &errcode);
  case_test(sqrt_suite(), &errcode);
  case_test(tan_suite(), &errcode);
  return errcode;
}