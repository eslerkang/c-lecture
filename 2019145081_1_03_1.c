/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-03-21
 * 과제번호: 03주차 1번
 */

#include <stdio.h>

int main() {
  int a;
  printf("32 ~ 127 까지의 정수를 입력: ");
  scanf("%d", &a);
  printf("%3c :%#7o(8진수)|%5d(10진수)|%#5x(16진수)\n", a, a, a, a);
  return 0;
}
