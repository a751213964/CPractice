/*************************************************************************
	> File Name: 扩展辗转相除法2.c
	> Author: ZhaoHang
	> Mail: 751213964@qq.com
	> Created Time: 2019年04月21日 星期日 19时39分48秒
 ************************************************************************/
#include<stdio.h>

int ex_gcd(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1, *y = 0;
        return a;
    }
    int r = ex_gcd(b, a % b, y, x);
    *y = *y - *x * (a / b);
    return r;
}
int main() {
    int n, m, x, y;
    while (~scanf("%d%d", &n, &m)) {
        ex_gcd(n, m, &x, &y);
        printf("%d * %d + %d * %d = %d\n", n, x, m, y, n * x + m * y);
    }
    return 0;

}
