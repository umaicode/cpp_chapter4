//4��-1. CINCOUT.cpp  4.1 ���� scope�� ǥ�� �����
#include <iostream>
using namespace std;
void main ( ) {
    char A[20];
    strcpy(A, "hello");
	struct student {
		int sno;
		char name[10];
	};
	student s;
    int number ;
    float decimal ;
    cout << endl ; //�� line���� �̵�	
    cout << "Get an integer: " ;
    cin  >> number ; //�Է��� �޴´�
    cout << endl ;
    cout << "Get a decimal number: " ;
    cin  >> decimal; //�Է��� �޴´�
    cout << endl << "The integer = " << number << " and the decimal = "<< decimal<<endl;
	//cout << s; //operator <<(cout, s) �����ڰ� ���� - 4-1.STREAM_IN_OUT.cpp ����
	system("pause");
}
