/*************************************************************************
	> File Name: switchshuchu.c
	> Author:Zhao Hang
	> Mail: 751213964@qq,com
	> Created Time: 2019年04月20日 星期六 15时43分51秒
 ************************************************************************/

#include <stdio.h>
int main() {

    int n;
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3: 
            printf("three\n");
            break;
        default:
            printf("error\n");
            break;
    }

return 0;
}
