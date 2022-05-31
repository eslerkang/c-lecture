/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-06-01
 * 과제번호: 14주차 1번
 */

#include <stdio.h>

int main() {
    setvbuf(stdout, 0, _IONBF, 0);

    int score = -1, count = 0;
    char grade;

    while (score > 110 || score < 0) {
        printf("%s", count == 0 ? "" : "0에서 110까지만 입력하세요.\n");
        printf("당신의 점수 입력 : ");
        scanf("%d", &score);
        count++;
    }

    switch (score/10) {
        case 11: case 10: case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("당신의 점수는 %d점이며 성적은 %c 입니다.\n", score, grade);

    return 0;
}
