///week13-3.cpp
///������m���k�䵪��(�̤j���]��)
#include <stdio.h>
int gcd(int a, int b)
{ ///�Ѥja, �ѤGb
    printf("�Ѥja: %d �ѤGb: %d\n", a, b);
    if(a==0) return b; ///�J��0�A�t�@��O����
    if(b==0) return a;
    return gcd(b, a%b);
}///�Ѥj�K�Ѥj�ѤT�ܦѤG
int main()
{
    printf("�п�J2�ӼƦr(ex. 51 68)");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("�L���̤j���]�ƬO:%d\n", ans);
}
