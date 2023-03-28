//4��-9.return by reference.cpp   4.4.4 reference�� ���� �Լ� return ��
//�ӽ� ������ �����ϴ� ��쿡 �� ���� �߻� Ȯ��
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
const int& maxInt(const int&, const int& b);

void main(){
	int i = 12, j = 13, n = 14;
   const int &k = maxInt(i, j);
   const int &m = maxInt(maxInt(i, n), j);
   printf("&k = %p\n", &k);
   cout << endl << "k = " << k<<endl;

   double d1 = 3.3, d2 = 4.4;
   cout << "&d1 = " << &d1 << ", &d2 = " << &d2 << endl;
   double d3 = maxInt(d1, d2);//�ӽú����� ����  d1�� �ּҿ� �̸� ���޹��� a�� �ּҰ� �ٸ�

   double d4 = maxInt(i + 12, 4.44);//�ӽú����� ����
   cout << endl << "d3 = " << d3 << endl;
   cout << endl << "d4 = " << d4 << endl;
   system("pause");
}
const int& maxInt(const int &a, const int &b){      
	//int *maxValue = new int;//heap ����
	const int *maxValue; //stack ������ local variable
    if (a>b) maxValue = &a;
    else maxValue = &b;
	printf("&a = %p, &b = %p, maxvalue = %p\n", &a, &b, maxValue);
	cout << "a = " << a << " b = " << b << endl;
    return *maxValue;
}