/*************************************************************************
	> File Name: myprintf.c
	> Author: ZhaoHang
	> Mail: 751213964@qq.com
	> Created Time: 2019年04月30日 星期二 18时30分18秒
 ************************************************************************/
#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>
#include <math.h>

int output_dnum(int x, int digit) {
    int temp = 0, digit2 = 0;
    int flag = (x >= 0 ? 0 : (x = -x, 1));
    if (flag) {
        putchar('-');
    }
    do {
        temp = temp * 10 + x % 10;
        digit2 += 1;
        x /= 10;
    } while(x);
    if (digit != -1) digit2 = digit;

    while (digit2--) {
        putchar(temp % 10 ^ 48);
        temp /= 10;
    }
    return 0;
}

int output_d(int x) {
    #define BASE 100000
    #define BASE_D 5
    unsigned int temp = (x >= 0 ? x : -x);
    int digit = floor(log10(temp)) + 1;
    int p1 = x / BASE, p2 = x % BASE;
    if (digit <= 5) {
        output_dnum(p2, -1);
    } else {
        output_dnum(p1, -1);
        if (p2 < 0) p2 = -p2;
        output_dnum(p2, BASE_D);
    }
    #undef BASE
    return 0;
}

int my_printf(const char *str, ...) {
    va_list args;
    va_start(args, str);
    int ret = 0;
    while (str[0]) {
        switch (str[0]) {
            case '%': {
                str++;
                switch (str[0]) {
                    case 'd': {
                        int x = va_arg(args, int);
                        output_d(x);
                    } break;
                }
            } break;
            default: putchar(str[0]), ret++; break;
        }
        str++;
    }
    return ret;
}

int main() {
    my_printf("hello world : %d\n", -5);
    printf("hello world : %d\n", -5);
    my_printf("hello world : %d\n", 10000);
    printf("hello world : %d\n", 10000);
    my_printf("hello world : %d\n", 0);
    printf("hello world : %d\n", 0);
    my_printf("hello world : %d\n", INT32_MIN);
    printf("hello world : %d\n", INT32_MIN);
    my_printf("hello world : %d\n", 1999999999);
    printf("hello world : %d\n", 1999999999);
    int n;
    scanf("%d", &n);
    my_printf(" has %d digits\n", my_printf("%d", n));
    printf(" has %d digits\n", printf("%d", n));
    return 0;
}
