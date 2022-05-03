/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-03-28
 * 과제번호: 04주차 2번
 */

#include <stdio.h>

int main() {
  double a, b;
  scanf("%lf %lf", &a, &b);
  printf("몫: %d\n", (int)(a/b));
  printf("나머지: %d\n", (int)a%(int)b);
  return 0;
}
