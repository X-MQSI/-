#include <stdio.h>
#include <windows.h>

//位分离法
void main()
{
    int num, hundreds, tens, ones, reversed;
    
    SetConsoleOutputCP(65001);  //定义Shell编码为UTF-8以防乱码

    start: //定义goto标签
    printf("请输入一个三位整数：");
    scanf("%d", &num);
    
    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;

    if (hundreds==0){
        printf("输入错误，请输入一个三位整数！\n");
        goto start;
    }
    
    reversed = ones * 100 + tens * 10 + hundreds;
    printf("逆序数是：%d\n", reversed);

    // 清除输入缓冲区，防止 scanf 后残留的换行符影响 getchar
    while (getchar() != '\n');
    printf("按任意键退出...");
    getchar();
}