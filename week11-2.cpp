///week11-2.cpp
///�禡�ŧi�A�禡�w�q�A�禡�I�s (���/���)
#include <stdio.h>

int addnum(int a, int b)
{///�e���O��ƪ��w�q
    printf("�{�b�i�J addnum()�禡�̡Aa:%d b:%d\n", a, b);
    int x;
    x = a + b;
    printf("��Ƭۥ[��A�o��ƭ�%d�Nreturn�^��\n", x);
    return x; ///�^�ǵ������Ϊ��a��
}

int main()
{
    int ans = addnum(10, 30); ///�ڭ̨ϥ�/�I�s���ۭq�禡
    printf("%d", ans);
}

