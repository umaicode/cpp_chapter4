//4��-15 const_int.cpp   4.5.1 const_cast
#include <iostream>
using namespace std;
int f(int& a) { return 1; }
int g(volatile int& b) { return 0; }
void main ()
{
    volatile int x = 0; //�޸� ����, register ����Ͽ� ����ȭ���� �ʴ´�
	register int n = 1; //register ����

    int y = 1;
	int* t;
	//t = &x;
	int *p;
	p = &n;
	y = x; y++;
	y = n; y++;
	x = y; x++;
	n = y; n++;
    //f(x); //volatile int x�� int&�� �����ϴ� ����
	f(n);
    g(y);
	g(x);
	system("pause");
}