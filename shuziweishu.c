/*************************************************************************
	> File Name: weishu.c
	> Author:zhaohang 
	> Mail:751213964@qq.com 
	> Created Time: 2019年04月16日 星期二 19时39分45秒
 ************************************************************************/

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    FILE *fout = fopen("/dev/null", "w");
    printf("%d\n", fprintf(fout, "%d", n));

    return 0;
}
