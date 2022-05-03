/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-04-11
 * 과제번호: 06주차 2번
 */

#include <stdio.h>

int main() {
    int i, cnt=0, dan=2;
    long long num = 1234567890;

    printf("%lld%lld%lld%lld%lld\n", num, num, num, num, num);
    
    while(cnt<=20) {
        if(cnt%10==0) {
            printf("+-----------+-----------+-----------+-----------+\n");
            if(cnt==10) {
                dan += 4;
            }
        }
        else {
            for(i=dan; i<=dan+3; i++) {
                printf("|%2d X%3d=%02d %c%c",
                        i,
                        cnt%10,
                        i*(cnt%10),
                        (i==dan+3 ? 124 : 0),
                        (i==dan+3 ? 10 : 0)
                );
            }
        }
        cnt++;
    }
    
    return 0;
}
