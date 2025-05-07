///week12-3.cpp
///Fibonacci數列(前兩項香家就是下一項)
///要把他列出來使用for迴圈陣列
#include <stdio.h>
int main()
{
    int a[30] = {0, 1};
    printf("1");
    for(int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d " , a[i]);
    }
}
