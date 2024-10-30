#include <stdio.h>

int main() {
    double amount, rate, interest;
    int months;

    printf("请输入存款金额：");
    scanf("%lf", &amount);
    printf("请输入存款期限（单位：月）：");
    scanf("%d", &months);

    // 根据存款期限范围选择年利率
    switch (months) {
        case 1 ... 3:
            rate = 0.026;
            printf("年利率为2.6%%。\n");
            break;
        case 4 ... 6:
            rate = 0.028;
            printf("年利率为2.8%%。\n");
            break;
        case 7 ... 12:
            rate = 0.030;
            printf("年利率为3.0%%。\n");
            break;
        case 13 ... 24:
            rate = 0.0375;
            printf("年利率为3.75%%。\n");
            break;
        case 25 ... 36:
            rate = 0.0425;
            printf("年利率为4.25%%。\n");
            break;
        case 37 ... 60:
            rate = 0.0475;
            printf("年利率为4.75%%。\n");
            break;
        default:
            printf("无效的存款期限，或超出可处理范围。\n");
            return 1;
    }

    // 计算利息
    interest = amount * rate * (months / 12.0);

    printf("利息为：%.2f\n", interest);
    return 0;
}