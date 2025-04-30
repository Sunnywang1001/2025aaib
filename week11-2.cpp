///week11-2.cpp
///函式宣告，函式定義，函式呼叫 (函數/函示)
#include <stdio.h>

int addnum(int a, int b)
{///前面是函數的定義
    printf("現在進入 addnum()函式裡，a:%d b:%d\n", a, b);
    int x;
    x = a + b;
    printf("兩數相加後，得到數值%d將return回傳\n", x);
    return x; ///回傳給剛剛較用的地方
}

int main()
{
    int ans = addnum(10, 30); ///我們使用/呼叫剛剛自訂函式
    printf("%d", ans);
}

