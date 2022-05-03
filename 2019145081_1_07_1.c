/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-04-19
 * 과제번호: 07주차 1번
 */

#include <stdio.h>

int main() {
    int i, j;
    for(i=1; i<=9; i++) {
        for(j=2; j<=9; j++) {
            printf("%2d X %2d = %2d  ", j, i, i*j);
        }
        printf("\n");
    }
    return 0;
}
