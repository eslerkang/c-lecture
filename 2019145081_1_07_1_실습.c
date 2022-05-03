/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-04-18
 * 과제번호: 07주차 1번
 */

// 환율정보(기준 날짜 2022-04-18) - 관세청(https://unipass.customs.go.kr/csp/index.do)

#include <stdio.h>

const double SUCHUL = 1217.04, SUIP = 1240.76;

double dollar2won(int mode, double dollar) {
    double exchange_rate = mode==1 ? SUCHUL : SUIP;
    return exchange_rate * dollar;
}

int main() {
    int mode;
    double won, dollar;
    printf("수출(1), 수입(2): ");
    scanf("%d", &mode);
    printf("환전할 달러: ");
    scanf("%lf", &dollar);
    won = dollar2won(mode, dollar);
    printf("환전 결과: %d원\n", (int)(won+0.5));
    return 0;
}
