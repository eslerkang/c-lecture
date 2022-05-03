/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-04-04
 * 과제번호: 05주차 2번
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand((unsigned)time(NULL));
    int user, com;
    printf("가위: 0, 바위: 1, 보: 2\n");
    scanf("%d", &user);
    com = rand()%3;
    if(com == user) {
        printf("비겼습니다.\n");
    } else if((user-com+2) % 3) {
        printf("컴퓨터가 이겼습니다.\n");
    } else {
        printf("사용자가 이겼습니다.\n");
    }
    printf("user: %d, com: %d\n", user, com);
    return 0;
}
