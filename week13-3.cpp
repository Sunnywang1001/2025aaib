///week13-3.cpp
///用輾轉鄉除法找答案(最大公因數)
#include <stdio.h>
int gcd(int a, int b)
{ ///老大a, 老二b
    printf("老大a: %d 老二b: %d\n", a, b);
    if(a==0) return b; ///遇到0，另一邊是答案
    if(b==0) return a;
    return gcd(b, a%b);
}///老大便老大老三變老二
int main()
{
    printf("請輸入2個數字(ex. 51 68)");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("他的最大公因數是:%d\n", ans);
}
