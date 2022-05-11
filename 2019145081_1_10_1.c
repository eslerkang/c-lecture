/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-05-09
 * 과제번호: 10주차 1번
 */

#include <stdio.h>

int main() {
    setvbuf(stdout, 0, _IONBF, 0);
    int count = 0, choice, start=1, end=30;
    long long x;
    printf("1-30중 아무 숫자나 생각하시오\n");
    for(x=0; x<0xffffffff; x++);
    while(1) {
        int num = (start+end)/2;
        printf("당신이 생각한 숫자가 %d가 맞나요?\n", num);
        printf("맞으면 0, 당신이 생각한 숫자가 %d 보다 작으면 -1, %d보다 크면 1을 입력하세요): ", num, num);
        scanf("%d", &choice);
        if(choice > 1 || choice < -1) {
            printf("0, 1, -1 중의 하나를 입력하세요\n");
            continue;
        }
        count++;
        if(choice == 0) {
            printf("와우, %d번 시도하고 맞췄어요\n", count);
            break;
        }
        if(choice == 1) {
            start = num+1;
        }
        else {
            end = num-1;
        }
    }
    return 0;
}
