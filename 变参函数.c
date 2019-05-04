/*************************************************************************
	> File Name: 变参函数.c
	> Author: ZhaoHang
	> Mail: 751213964@qq.com
	> Created Time: 2019年04月21日 星期日 20时28分32秒
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>

int max_int(int num, ...) {
    int ans = 0, temp;
    va_list arg;
    va_start(arg, num);
    while (num--) {
        temp = va_arg(arg, int);
        if (temp > ans) ans = temp;
    }
    va_end(arg);
    return ans;
}

int main() {
    printf("%d\n", max_int(3, 1, 5, 3));
    printf("%d\n", max_int(2, 1, 3));
    printf("%d\n", max_int(6, 6, 5, 3, 7, 9, 10));
    printf("%d\n", max_int(3, 1, 9, 10));
    return 0;
}
