/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-04-26
 * 과제번호: 08주차 1번
 */

// 최저임금위원회(2022년 적용 최저임금) - https://www.minimumwage.go.kr/main.do

#include <stdio.h>

int SIGUP = 9160;

int main() {
    int work[8] = {0}, i, total=0;
    for (i=0; i<7; i++) {
        while (1) {
            switch (i) {
                case 0:
                    printf("월요일 일한 시간: ");
                    break;
                case 1:
                    printf("화요일 일한 시간: ");
                    break;
                case 2:
                    printf("수요일 일한 시간: ");
                    break;
                case 3:
                    printf("목요일 일한 시간: ");
                    break;
                case 4:
                    printf("금요일 일한 시간: ");
                    break;
                case 5:
                    printf("토요일 일한 시간: ");
                    break;
                case 6:
                    printf("일요일 일한 시간: ");
                    break;

            }
            scanf("%d", &work[i]);
            if((work[i] >= 0) && (work[i] <= 5)) {
                break;
            }
            printf("올바른 값을 입력해주세요\n");
        }
    }
    for(i=0; i<7; i++) {
        if(work[i] > 4) {
            total += 10000;
        }
        total += work[i] * SIGUP;
    }
    printf("주급은 %d원입니다.", total);
    return 0;
}
