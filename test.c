/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-00-00
 * 과제번호: 00주차 0번
 */

#include <stdio.h>

void call(int *n) {
    *n = *n+9;
}

int main() {
    int n=5, a[5];
    call(&n);
    printf("%d\n",n);
    for(int i=0; i<sizeof(a) / sizeof(int); i++) {
        printf("%d\n", a[i]);
    }
    printf("\n\n\n\n\n");
    printf("%d\n", '|');
    printf("%d\n", ' ');
    printf("%d\n", '\n');
    return 0;
}
