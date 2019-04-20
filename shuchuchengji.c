/*************************************************************************
	> File Name: shuchuchengji.c
	> Author:Zhao Hang
	> Mail:751213964@qq.com 
	> Created Time: 2019年04月20日 星期六 15时13分18秒
 ************************************************************************/

#include <stdio.h>
int main() {

    int n;
    scanf("%d", &n);

    if (n == 0 ) {
        printf("FOOLISH");
    } else if (n > 0 && n < 60) {
        printf("FAIL");
    } else if (n < 75) {
        printf("MEDIUM");
    } else if (n <= 100) {
        printf("GOOD");
    } else {
        printf("HAVE NO CORRECT RECORD");
    }

return 0;

}
