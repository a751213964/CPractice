/*************************************************************************
	> File Name: 扩展辗转相除法.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月21日 星期日 18时30分48秒
 ************************************************************************/

#include<stdio.h>

int x, y;
int ex_gcd(int a, int b) {
    if (b == 0) {
        x = 1, y = 0;
        return 0;
    }
    int r = ex_gcd(b, a % b), t = x;
    x = y;
    y = t - y * (a / b);
    return r;
}

int main() {
    int n, m;
    while (~scanf("%d%d", &n, &m)) {
        ex_gcd(n, m);
        printf("%d * %d + %d * %d = %d\n", n, x, m, y, n * x + m * y);

    }
    return 0;

}
