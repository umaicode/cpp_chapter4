//4��-8. return by value.cpp   4.4.4 reference�� ���� �Լ� return ��
#include <iostream>
using namespace std;

int& value(int*, int n);
double* maxDouble(double* , double* );

void main () {
	int a[] = {10, 20, 30, 40, 50};
	int n = 0;
	//n++ = 10;//lvalue�� �ƴϴ�
	++n = 99;
	cout << " ++n = " << n << endl;

    value(a, 2) = 66;//value(a,2)�� lvalue
    value(a, 4) = 77;
	for (int i = 0; i < 5; i++)
		cout<<"a["<<i<<"] = "<<a[i]<<endl;

	double i = 12.2, j = 13.3;
	double* k = maxDouble(&i, &j);
	//double k = maxDouble(&i, &j);//return ���� double*�̹Ƿ� double�� ġȯ�ϹǷ� ����
	cout << endl << "k = " << *k << endl;
	system("pause");
}

int& value(int *a, int n)
{  
    return a[n]; 
}
double* maxDouble(double* a, double* b) {
	return (*a > * b) ? a : b;
}