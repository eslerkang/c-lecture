/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-04-04
 * 과제번호: 05주차 1번
 */

#include <stdio.h>

int main() {
    const int HOURLY_PAY = 12800;
    int workHour, mealBonus, bonusRate, total = 0;
    scanf("%d", &workHour);
    if(workHour >= 40) {
        mealBonus = 10000;
        bonusRate = 10;
    } else {
        mealBonus = 9000;
        bonusRate = 2;
    }
    total += HOURLY_PAY * workHour;
    total += (workHour/4) * mealBonus;
    total += total*bonusRate/100;
    printf("오늘의 임금: %d\n", total);
    return 0;
}
