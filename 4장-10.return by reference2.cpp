//4��-10. return by reference2.cpp   4.4.4 reference�� ���� �Լ� return ��
#include <iostream>
using namespace std;

const int& maxInt(int a, int b);

void main(){
   int i = 11, j = 33;
   cout << endl << "&i = " << &i << "\t" << "&j = " << &j << endl;
   const int &k = maxInt(i, j);//maxInt(a,b)�� b �ּҸ� return�ϴ� ���� Ȯ��
   cout << "&k = " << &k << endl;
   cout << "k = " << k << endl;//k ���� ��Ȯ���� ������ Ȯ���Ѵ� 
   cout << "maxInt() = " << maxInt(i, j) << endl;
   system("pause");
}
const int& maxInt(int a, int b){//a,b, return ���� �ּҴ� i, j�� ��� ������ Ȯ��
	printf("&a = %p, &b = %p\n", &a, &b);
    cout << "maxInt(int,int):: a = " << a << " b = " << b << endl;
    return (a>b) ? a : b; //a,b�� local variable�̴� 
    //local variable �Ǵ� �ӽ� ���� a, b�� �ּҸ� ��ȯ�ϴ� ���� �޽��� �߻�
}
