//4-2. const.cpp   4.2.2 ��� pointer ���� - ��� pointer�� �Լ��� ������ �� ���� ����
// �Ʒ� �ҽ��ڵ�� ��� pointer�� �׽�Ʈ�ϱ� ���� �뵵�� �ҽ� �ڵ�
#include<iostream>
using namespace std;
void square(const int* const);
void sum(int* const);
void add(const int*);
int main(void){
    //pointer ����� �����ϴ� �ҽ��ڵ�
    int i1 = 5;
    int i2 = 10;
    int i3 = 15;
    int i4 = 20;
	int *p1 = &i1;
    const int* pc_a = &i2; //pointer-to-constant
    const int* pc_b = &i2;
    //(*pc_a)++;
    int* const cp_a = &i3; //constant pointer
    int* const cp_b = &i3;
    (*cp_a)++;
    const int* const cpc_a = &i4; //constant pointer-to-const
    const int* const cpc_b = &i4;
    
    cout << "�ʱ� ��" << endl;
    cout << "*pi : " << *p1 << " \t" << "*pc_a : " << *pc_a << "\t";
    cout << "*cp_a : " << *cp_a << "\t" << "*cpc_a : " <<  *cpc_a << endl<< endl;

	int *pi = &i1;//�� ���Ͽ� pointer-to-constant, constan pointer, constant pointer-to-const�� ���� ġȯ�� ���������� ����
    //pi = pc_a;
    pc_a = pi;

    //pi = pc_a;//const int*  ������ ���� int*�� assign�� �� ����
    pi = cp_a;
    (*pi)++;
    //pi = cpc_a;//const int*  ������ ���� int*�� assign�� �� ����

	//pointer-to-constant�� ���Ͽ� ġȯ�� ���������� ����
    cout << "pointer-to-constant�� ������ ġȯ" << endl;
	pc_a = pi;
	//(*pc_a)++;
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = cp_a;  
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = cpc_a;
    cout << "*pc_a : " << *pc_a << "\t";
    pc_a = pc_b;
    cout << "*pc_a : " << *pc_a << endl << endl;
    //*pc_a = *pi;  //���� ������ �� �ִ� lvalue���� �Ѵ�, ������ �� ���ٴ� ��
    //*pc_a = *cp_a; 
    //*pc_a = *cpc_a;
    //*pc_a = *pc_b;

	//constan pointer�� ���Ͽ� ġȯ�� ���������� ����
    //cp_a = pi; //���� ������ �� �ִ� lvalue���� �Ѵ�, ������ �� ���ٴ� ��
    //cp_a = pc_a;
    //cp_a = cpc_a;
    //cp_a = cp_b;
    cout << "constant pointer�� ������ ġȯ" << endl;
    *cp_a = *pi; 
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *pc_a;
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *cpc_a;
    cout << "*cp_a : " << *cp_a << "\t";
    *cp_a = *cp_b;
    cout << "*cp_a : " << *cp_a << endl << endl;
	
	//constant pointer-to-const�� ���Ͽ� ġȯ�� ���������� ����
    //cpc_a = pi;    
    //cpc_a = pc_a;
    //cpc_a = cp_a;
    //cpc_a =cpc_b;
    //*cpc_a = *pi;
    //*cpc_a = *pc_a;
    //*cpc_a = *cp_a;
    //*cpc_a = *cpc_b;
    //pointer ����� ����ϴ� �ҽ��ڵ�: parameter ���޽ÿ� �ַ� ����Ѵ� 
    square(pi);
    sum(pi);
    add(pi);
    square(pc_a);
    //sum(pc_a);
    add(pc_a);
    square(cp_a);
    sum(cp_a);
    add(cp_a);
    square(cpc_a);
    //sum(cpc_a);
    add(cpc_a);
    system("pause");
}

void square(const int* const p) {
   // int* a = p;
   // int* const b = p;
    int const* c = p;
    int const* const d = p;
}
void sum(int* const q) {
    int* a = q;
    int* const b = q;
    int const* c = q;
    int const* const d = q;
}
void add(const int* q) {
    //int* a = q;
    //int* const b = q;
    int const* c = q;
    int const* const d = q;
}