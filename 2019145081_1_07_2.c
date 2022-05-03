/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-04-19
 * 과제번호: 07주차 2번
 */

#include <stdio.h>

void ufoLeft() {
    long long x;
    for(x=0; x<0xfffffff; x++);
    printf("\b \b\b \b\b \b\b \b\b \b\b \b");
    printf("<#=#>");
}

void ufoRight() {
    long long x;
    for(x=0; x<0xfffffff; x++);
    printf("\b \b\b \b\b \b\b \b\b \b");
    printf(" <#=#>");
}

int main() {
    setvbuf(stdout, 0, _IONBF, 0);
    int count, i;
    printf("이동할 칸 수: ");
    scanf("%d", &count);
    printf("<#=#>");
    for(i=0; i<count; i++) {
        ufoRight();
    }
    for(i=0; i<count; i++) {
        ufoLeft();
    }
    return 0;
}
