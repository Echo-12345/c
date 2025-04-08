#include <stdio.h>

int main() {
    // 定义最大宽度
    int width = 20; 

    // 输出靠右对齐的多行文本
    printf("%*s\n", width, "Hello");
    printf("%*s\n", width, "World");
    printf("%*s\n", width, "C Programming");

    return 0;
}