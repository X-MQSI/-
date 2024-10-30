#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double x, y;
    printf("请输入x的值：");
    scanf("%lf", &x);

    if (x < -PI / 2) {
        printf("应选用y = 2x^2 + 3cos(x) + 5\n");
        y = 2 * x * x + 3 * cos(x) + 5;
    } else if (x <= PI / 2) {
        printf("应选用y = x^3 - x^(1/3) + 5x\n");
        y = pow(x, 3) - pow(x, 1.0 / 3.0) + 5 * x;
    } else {
        printf("应选用y = sqrt(x) + sin(3x)\n");
        y = sqrt(x) + sin(3 * x);
    }

    printf("y的值为：%f\n", y);
    
    return 0;
}