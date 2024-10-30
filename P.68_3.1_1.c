#include <stdio.h>
#include <windows.h>

//位分离法
int main()
{
    int num, hundreds, tens, ones, reversed;
    char check;
    
    SetConsoleOutputCP(65001);  //定义Shell编码为UTF-8以防乱码

    start: //定义goto标签
    printf("请输入一个三位整数：");
    scanf("%d%c", &num, &check);

    hundreds = num / 100;
    tens = (num / 10) % 10;
    ones = num % 10;
    
    //输入合法性判断
    if (hundreds==0 || hundreds >=10 || check!='\n'){
        printf("输入错误，请输入一个三位整数！\n");
        while(getchar() != '\n');
        goto start;
    }
    
    reversed = ones * 100 + tens * 10 + hundreds;
    printf("逆序数是：%d", reversed);

    printf("按任意键退出...")
    getchar();

    return 0;
}
