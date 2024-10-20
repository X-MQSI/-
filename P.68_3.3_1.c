#include <stdio.h>
#include <windows.h>

void main() {
    float c, f;

    SetConsoleOutputCP(65001);  //定义Shell编码为UTF-8以防乱码

    printf("请输入摄氏度：");
    scanf("%f", &c);

    f = (9.0 / 5.0) * c + 32;
    printf("%.2f 摄氏度 = %.2f 华氏度\n", c, f);

    // 清除输入缓冲区，防止 scanf 后残留的换行符影响 getchar
    while (getchar() != '\n');
    printf("按任意键退出...");
    getchar();
}
