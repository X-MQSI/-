#include <stdio.h>
#include <math.h>
#include <windows.h>

// 原数学函数
double f(double x) {
    return pow(x, 3) - 4 * pow(x, 2) + 1;
}

// 定义二分法算法函数
double bisection_method(double a, double b, int iterations) {

    int iteration = 1;
    double midpoint;

    // 检查区间是否异号
    if (f(a) * f(b) >= 0) {
        printf("f(a)和f(b)同号，此函数在该区间无根。\n");
        return NAN; // 返回错误
    }

    // 二分法迭代循环
    while (iteration <= iterations) {

        // 计算区间中点(二分法区间新值)
        midpoint = (a + b) / 2;

        // 打印迭代信息
        printf("第%d次迭代：\n", iteration);
        printf("区间: [%f, %f]\n", a, b);
        printf("中点: %f\n", midpoint);
        printf("f(中点): %f\n\n", f(midpoint));
        
         // 区间逼近
        if (f(midpoint) == 0) {                
            return midpoint;
            //若f(midpoint) = 0，则midpoint为精确根
        } else if (f(a) * f(midpoint) < 0) {
            b = midpoint;
            //若f(a)和f(midpoint)异号，则根在(a, midpoint)
        } else {
            a = midpoint;
            //若f(a)和f(midpoint)同号，则根在(midpoint, b)
        }
        
        iteration++;
        // 已迭代次数加1
    }

    // 返回近似根
    return (a + b) / 2;
}

int main() {
    SetConsoleOutputCP(65001); // 设置控制台输出为UTF-8编码，以防乱码
    printf("使用二分法计算函数  X^3 - 4*X^2 + 1 = 0  的根\n");
    
    // 定义区间(0,1)
    double a = 0;
    double b = 1;

    // 迭代次数
    int iterations;
    printf("请输入迭代次数: ");
    scanf("%d", &iterations);

    // 调用二分法求解并打印过程：区间与迭代次数
    double root = bisection_method(a, b, iterations);

    printf("函数在区间(%f, %f)内的近似根为: %f\n", a, b, root);

    // 清除输入缓冲区，防止 scanf 后残留的换行符影响 getchar
    while (getchar() != '\n');
    printf("按任意键退出...");
    getchar();

    return 0;
}

// 参考资料1：https://blog.csdn.net/2303_79387663/article/details/136796078
// 参考资料2：https://www.guru99.com/zh-CN/bisection-method.html

// 变量说明：a, b为初始区间，iterations为迭代次数，iteration为已迭代次数，midpoint为区间中点，root为近似根