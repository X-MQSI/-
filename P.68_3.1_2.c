#include <stdio.h>
#include <string.h>
#include <windows.h>

//逆序输出法
void main() {
    char str[4];

    SetConsoleOutputCP(65001);  //定义Shell编码为UTF-8以防乱码

    start: //定义goto标签
    printf("请输入一个三位整数：");
    scanf("%s", str);

    int len = strlen(str);

    if (len == 3) {
        printf("逆序数是：%c%c%c\n", str[2], str[1], str[0]);
    }
    else{
        printf("输入错误，请输入一个三位整数！\n");
        goto start;
    }

    // 清除输入缓冲区，防止 scanf 后残留的换行符影响 getchar
    while (getchar() != '\n');
    printf("按任意键退出...");
    getchar();
}
