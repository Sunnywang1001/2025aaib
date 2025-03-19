///week05-1.cpp
///陣列array
#include <stdio.h>
int main()
{///陣列宣告，有4格,裡面初始直放右邊大括號
    int a[4] = {10, 20, 30, 40};
    for(int i=0; i<4; i++) {
        printf("%d ", a[i] );
    }
    printf("\n"); ///跳行

    a[0] = 99;
    for(int i=0; i<4; i++) {
        printf("%d ", a[i] );
    }
    printf("\n"); ///跳行
}
