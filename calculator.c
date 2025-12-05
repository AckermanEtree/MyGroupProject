#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

// 队友写的减法函数
int minus(int a, int b) {
    return a - b;
}

int main() {
    printf("Simple Calculator Project\n");
    printf("Version: 1.0\n");
    printf("3 + 5 = %d\n", add(3, 5)); 
    return 0;
}
