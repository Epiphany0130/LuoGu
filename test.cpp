#include <stdio.h>
int main(void) {
    double score[10], avg = 0;
    int i;
    printf("请输入十个学生的成绩:");
    for(i = 0; i < 10; i++) {
        scanf("%d", &score[i]);
        avg += score[i];
    }
    printf("平均成绩：%f", avg / 10);
    return 0;
}