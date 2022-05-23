/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-00-00
 * 과제번호: 00주차 0번
 */

#include <stdio.h>
#include <string.h>

int main() {
    char string[61];
    int i;
    scanf("%[^\n]", string);
    printf("%s\n", string);
    for(i=0; string[i]!='\0'; i++) {
        printf("%d ", string[i]);
    }
    if(!string[60]) {
        printf("fyck");
    }
}
