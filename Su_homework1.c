/*************************************************************************
	> File Name: Su_homework1.c
	> Author:zhaohang 
	> Mail:751213964@qq.com 
	> Created Time: 2019年04月17日 星期三 18时18分55秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>   
#include <pwd.h>

int main(void) {   
    char buf[100]; 
    system("color 2A");
    getcwd(buf,sizeof(buf));   
    printf("当前用户为: zhaohang@zhaohang当前目录为: %s\n", buf);

    return 0;
 }  
