#include <stdio.h>

int main() {
    int n;
    printf("请输入一个整数：");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("该数能同时被3和5整除。\n");
    } else if (n % 3 == 0) {
        printf("该数能被3整除。\n");
    } else if (n % 5 == 0) {
        printf("该数能被5整除。\n");
    } else {
        printf("该数不能被3或5整除。\n");
    }

    return 0;
}
