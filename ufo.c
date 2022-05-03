/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-04-11
 * 과제번호: 06주차 1번
 */

#include <stdio.h>

int main() {
    long long x, stop=0xfffffff;
    int k;
        
    setvbuf(stdout, 0, _IONBF, 0);

    for(k=0; k<70; k++) {
        for(x=0; x<stop; x++);
        printf("\b \b\b \b\b \b\b \b\b \b");
        printf(" ");
        printf("<#=#>");
    }
    for(k=0; k<70; k++) {
        for(x=0; x<stop; x++);
        printf("\b \b\b \b\b \b\b \b\b \b\b \b");
        printf("<#=#>");
    }
    return 0;
}
