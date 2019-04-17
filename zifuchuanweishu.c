/*************************************************************************
	> File Name: weishu1.c
	> Author:zhaohang 
	> Mail:751213964@qq.com 
	> Created Time: 2019年04月17日 星期三 20时21分26秒
 ************************************************************************/

#include <stdio.h>
int main(){
    int n;
    char str[100];
    scanf("%d",&n);
    printf("hello world\n");
    sprintf(str, "hello world\n");
    printf("str = %s",str);
    FILE *fout = fopen("output", "w");
    fprintf(fout, "hello world");
    printf("has %d digits\n", printf("%d", n));

return 0;
}
