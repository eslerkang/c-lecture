/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-05-23
 * 과제번호: 12주차 1번
 */

#include <stdio.h>

void cls() {
    int i;
    for(i=0; i<100; i++) {
        printf("\n");
    }
}

void buffer() {
    long long x=0xfffffff, i;
    for(i=0; i<x; i++);
}

int main() {
    setvbuf(stdout, 0, _IONBF, 0);
    int i, j, len;
    char string[255] = "", *format = "1234567890", choice;
    cls();
    while(1) {
        printf("문자열을 입력하세요(60자 이하): ");
        scanf(" %[^\n]", string);
        if(string[60] == 0) {
            break;
        }
        for(i=0; i<61; i++) {
            string[i] = 0;
        }
        printf("60자 이하로 다시 입력해주세요.\n");
    }
    len = 0;
    while(string[len]!=0) len++;
    for(i=len; i<60; i++) {
        string[i] = 32;
    }
    i = 0;
    buffer();
    cls();
    while(1) {
        printf("왼쪽(l), 오른쪽(r) 선택: ");
        scanf(" %c", &choice);
        if(choice == 'l' || choice == 'r') {
            break;
        }
        printf("0, 1 중 하나만 입력하세요.\n");
    }
    buffer();
    cls();
    for(i=0; ;i++) {
        printf("%10d%10d%10d%10d%10d%10d\n", 1, 2, 3, 4, 5, 6);
        printf("%s%s%s%s%s%s\n", format, format, format, format, format, format);
        if(choice == 'l')
            for(j=0; j<60; j++) {
                putchar(string[(i+j)%60]);
            }
        else
            for(j=59; j>=0; j--) {
                putchar(string[59-(i+j)%60]);
            }
        buffer();
        cls();
    }
    return 0;
}
