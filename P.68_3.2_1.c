#include <stdio.h>
#include <math.h>
#include <windows.h>

#define PI 3.14159265358979  // 圆周率常量
int main() {

    double radius, volume, surface_area;

    SetConsoleOutputCP(65001);  //定义Shell编码为UTF-8以防乱码

    start: //定义goto标签
    printf("请输入球体的半径：");
    scanf("%lf", &radius);

    if (radius <= 0)
    {
        printf("不合法的半径，请重新输入。");
        goto start;
    }
    
    // pow 为求幂函数，pow(x,y)表示x的y次方
    volume = (4.0 / 3.0) * PI * pow(radius, 3);  // 体积
    surface_area = 4 * PI * pow(radius, 2); // 表面积

    printf("球体的体积为：%f\n", volume);
    printf("球体的表面积为：%f\n", surface_area);

    // 清除输入缓冲区，防止 scanf 后残留的换行符影响 getchar
    while (getchar() != '\n');
    printf("按任意键退出...");
    getchar();

    return 0;
}
