//4��-13 const_cast.cpp   4.5.1 const_cast
#include<iostream>
using namespace std;
int increase(int *p) { 
	*p += 1;
	return *p;
}
int main()
{
   const int a = 100;
   const int *ptr = &a;
   //*ptr += 1;
   //a++;
   int *q = const_cast <int*> (ptr);//const_cast�� ������ �����ΰ�?
   *q += 1;
   cout << "a = " << a << endl;
   cout<<"*q = "<<*q << endl<< "increase(q) = " << increase(q)<<endl;
   cout << "address of q = " << q << endl<<"address of a = " << &a << endl;//�ּҴ� ������ ���� �ٸ��� ������?
   //*q�� ����Ͽ� ���� �����, const a�� ��ü�� *q�� ���ؼ��� ����� ���� ���� ��, �׷��� cout <<a�� ���� ������ ������ ��� ���� ������ �ȵǹǷ� �ʱ� ���� �״�� ��µ�
   cout << "a = " << a << "   *q= " << *q << endl; //a�� *q�� ���� �ٸ��� �� �׷���?
   system("pause");
}
