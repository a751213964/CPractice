/*************************************************************************
	> File Name: erfenchazhao.c
	> Author: ZhaoHang
	> Mail:
	> Created Time: 2019年04月21日 星期日 15时16分22秒
 ************************************************************************/

#include <stdio.h>

int binary_search(int *num, int n, int val) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (num[mid] == val) return mid;
        if (num[mid] < val) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

 int arr[1000];

 int main() {
    int n, m;
    





    return 0;
 }
