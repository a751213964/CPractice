/*************************************************************************
	> File Name: num_of_string.c
	> Author:zhaohang 
	> Mail:751213964@qq.com 
	> Created Time: 2019年04月16日 星期二 20时47分43秒
 ************************************************************************/

#include <stdio.h>
int main(){
    char string[100];
    scanf("%[^\n]s", string);
    int ret = printf("%s", string);
    printf("has %d digits\n", ret);

    return 0;
}
