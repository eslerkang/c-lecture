/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-00-00
 * 과제번호: 00주차 0번
 */

#include <stdio.h>

typedef struct human {
    char name[10];
    struct human* next;
} human;

int main() {
    int i;
    human h1 = {"kang"}, h2={"tae"}, h3={"jun"};
    h1.next = &h2;
    h2.next = &h3;

    human *now = &h1;
    
    while(now) {
        printf("%s\n", now->name);
        now = now->next;
    }

    return 0;
}
