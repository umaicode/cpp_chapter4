//4-4. reference_variable.cpp    4.3 pointer ������ reference ����
#include <iostream>
using namespace std;
#define COLS 5
void update(int* const& p) {//���� ������ �޴´� 
    *p = 10;
    //p = nullptr;
}
void main(){      
    int a[COLS] = {10, 11, 12, 13, 14};
    int *pa[COLS];
    int (*ap)[COLS] = &a; 

    cout<<"<<ap ���>>"<<endl;
    for(int i=0; i<COLS; i++){
        cout<<&a[i]<<"\t"<<&(*ap)[i]<<"\t" <<(*ap)+i<<"\t"	
             <<a[i]<<"\t" <<(*ap)[i]<<"\t"<<endl;
    }
    cout<<endl;

    int b[10];
    //int &ra[2] = {&b[0],&b[1],&b[2]};//array of reference�� ����� �� ����
    //int &ra[11] = a;
    //int &ra[COLS] = {0,0,0,0,0};
    
    int (&ar)[COLS] = a; //�迭 ��ſ� reference ���
	//ar++;
    cout<<"<<ar ���>>"<<endl;
    for(int i=0; i<COLS; i++)
        cout<<"ar[i] = "<<ar[i]<<"\t"<<"*(ar+i) = "<<*(ar+i)<<endl;
    cout<<endl;
    cout<<"<<ar[1] ���� ��� ���>>"<<endl;
    ar[1] = *(ar + 1);     
    cout<<"*(ar+1) = "<<*(ar+1)<<"\t" <<"*(ar+2) = "<<*(ar+2)<<"\t" 
		<<"ar[1] = "<<ar[1]<<"\t" <<"ar[2] = "<<ar[2]<<endl;

    cout<<endl<<"<<reference���� rfrn ���>>"<<endl;
    int* const& rfrn = a;
    //int &const *rfrn = a; //reference�� ���� pointer�� ����� �� ����
    rfrn[1] = rfrn[0] + 10;
	cout<<"&a[0] = "<<&a[0]<<"\t"<<"&a[1] = "<<&a[1]<<endl;
    cout<<"*(rfrn+1) = "<<*(rfrn+1)<<"\t" <<"rfrn[1] = "<<rfrn[1]<<endl;
    cout<<"(rfrn+1) = "<<(rfrn+1)<<"\t" <<"&rfrn[1] = "<<&rfrn[1]<<endl;
    int* const p = a;
    update(p);
	system("pause");
}