//4��-11 return by reference3.cpp   4.4.4 reference�� ���� �Լ� return ��
#include <iostream>
using namespace std;
int& sub(int a, int b);

void main(){
    int c = 1, d = 2;
    int &result = sub(c,d);
    cout<<"main():: result = "<< result<<endl; //���� ���� ���
    printf("main()::sub() = %d\n", sub(c, d));//�ùٸ� ���� ���
	system("pause");
}
int& sub(int a, int b){
    int temp;
    temp = a+b;

	printf("int& sub(int,int)::&temp = %p   ", &temp);
    cout << " a = " << a << " b = " << b << " temp = " << temp << endl;
    return temp;//local variable�� �ּҰ� return�Ǵ� ���� Ȯ�� - ���߿� stack���� ������� �־� ����
}

