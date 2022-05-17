/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-05-16
 * 과제번호: 11주차 1번
 */

#include <stdio.h>

int main() {
    char string[255], *pointer;
    pointer = string;
    int i;
    printf("대소문자 혼합 입력: ");
    scanf("%[^\n]", string);
    while(*pointer) {
        if(*pointer >= 'a' && *pointer<='z') {
            (*pointer)-=32;
        }
        else if(*pointer >= 'A' && *pointer<='Z') {
            (*pointer)+=32;
        }
        pointer++;
    }
    printf("대소문자 변환 결과: ");
    printf("%s\n\n", string);
    printf("---처리끝");
    return 0;
}
