/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-05-02
 * 과제번호: 09주차 1번
 */

// 4월 19일 수업자료 12페이지 참고(cls 함수)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cls(int line) {
    int i;
    for(i=0; i<line; i++) {
        printf("\n");
    }
}

void delay() {
    long long x;
    for(x=0; x<0xfffffff; x++);
}

int main() {
    setvbuf(stdout, 0, _IONBF, 0);
    srand((unsigned)time(NULL));
    int nums[25] = { 0 };
    int i, j, answer, input, count = 0;

    cls(100);

    for(i=0; i<5; i++) {
        answer = rand() % 25;
    
        for(j=0; j<25; j++) {
            printf("%-3d", j);
        }
    
        cls(1);
        
        for(j=0; j<25; j++) {
            if(j!=answer) {
                nums[j] = 8;
            } else {
                nums[j] = 0;
            }
            printf("%d  %c", nums[j], (j==9 ? 32: 0));
        }
    
        delay();

        cls(100);

        printf("0은 몇 번에? ");
        scanf("%d", &input);

        cls(1);

        if(input == answer) {
            printf("맞췄음! ");
            count++;
        } else {
            printf("틀렸음! ");
        }

        printf("%d번 찾음", count);

        cls(2);

        if(i!=4) {
            delay();
        } else {
            printf("09주차1번 끝\n");
        }


    }

    return 0;
}
