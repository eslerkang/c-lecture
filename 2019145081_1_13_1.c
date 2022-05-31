/*
 * 학번: 2019145081
 * 이름: 강태준
 * 이메일: nexus3131@naver.com
 * 제출일: 2022-05-30
 * 과제번호: 13주차 1번
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct Student {
    char num[255];
    char name[255];
    int year;
    int month;
    int day;
    char birth[255];
} student;

int main() {
    student students[10];
    int i = 1, j;
    while (i<11) {
        printf("학생(%d)-학번, 이름, 태어난 년도, 월, 일 입력 : ", i);
        scanf("%s %s %d %d %d", students[i-1].num, students[i-1].name, &(students[i-1].year), &students[i-1].month, &students[i-1].day);
        int isDigit = 1, isUniqueNum = 1;
        for(j=0; j<strlen(students[i-1].num); j++) {
            if(isdigit(students[i-1].num[j]) == 0) {
                isDigit = 0;
                break;
            }
        }
        for(j=0; j<i-1; j++) {
            if(strcmp(students[i-1].num, students[j].num) == 0) {
                isUniqueNum = 0;
                break;
            }
        }
        if (strlen(students[i-1].num) != 9) {
            printf("\t길이-학번을 9자리로 입력해 주세요\n");
            continue;
        } else if(isDigit == 0) {
            printf("\t숫자-학번을 숫자로만 입력해 주세요\n");
            continue;
        } else if(isUniqueNum == 0) {
            printf("\t같은 학번이 존재합니다. 다시 입력해주세요.\n");
            continue;
        } else if(students[i-1].month < 1 || students[i-1].month > 12) {
            printf("\t월: 1부터 12까지 가능 합니다.\n");
            continue;
        } else if(students[i-1].day < 1 || students[i-1].day > 31) {
            printf("\t일: 1부터 31까지 가능 합니다.\n");
            continue;
        }
        char year[255], month[5], day[5];
        sprintf(year, "%04d", students[i-1].year);
        sprintf(month, "%02d", students[i-1].month);
        sprintf(day, "%02d", students[i-1].day);
        strcpy(students[i-1].birth, "");
        strcat(students[i-1].birth, year);
        strcat(students[i-1].birth, month);
        strcat(students[i-1].birth, day);
        i++;
    }

    student tmp;
    for(i=0; i<9; i++) {
        for(j=i+1; j<10; j++) {
            if(strcmp(students[i].birth, students[j].birth) > 0) {
                tmp = students[i];
                students[i] = students[j];
                students[j] = tmp;
            }
        }
    }
    printf("%-12s%-10s%s\n", "학번", "이름", "생년월일");
    for(i=0; i<10; i++) {
        printf("%-12s%-10s%04d년%02d월%02d일\n", students[i].num, students[i].name, students[i].year, students[i].month, students[i].day);
    }
    return 0;
}
