/*************************************************************************
	> File Name: panduanweishu.c
	> Author: 
	> Mail: 
	> Created Time: 2019年04月20日 星期六 16时59分17秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int n;
    int m = 0;
    scanf("%d", &n);
    do{
        n /= 10;
        m++;
    } while (n != 0);

    printf("%d\n", m);
    return 0;
}
