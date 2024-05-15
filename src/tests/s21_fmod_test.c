#include "s21_fmod_test.h"

int main() {
  int errcode = 0;
  case_test(fmod_suite(), &errcode);
  return errcode;
}