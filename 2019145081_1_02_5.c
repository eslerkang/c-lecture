/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-03-14
 * 과제번호: 02주차 05번
 */

#include <stdio.h>

int main() {
  int i_num;
  short s_num;
  long l_num;
  long long ll_num;
  char c_name;
  float f_num;
  double d_num;

  printf("int: %10ld\n", sizeof(i_num));
  printf("short: %8ld\n", sizeof(s_num));
  printf("long: %9ld\n", sizeof(l_num));
  printf("long long: %4ld\n", sizeof(ll_num));
  printf("float: %8ld\n", sizeof(f_num));
  printf("double: %7ld\n", sizeof(d_num));
  printf("char: %9ld\n", sizeof(c_name));

  return 0;
}