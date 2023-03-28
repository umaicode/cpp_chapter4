//4-7. Ÿ��CASTING.cpp    4.5.4 static_cast
#include <iostream>
#include <string.h>
using namespace std;

class Base{
public:
    virtual void classname(){cout << "Base" << endl;};
};
class Derived : public Base{
public:
    void classname(){cout << "Derived" << endl;};
};
void main(){
    //1�� �ּ�
    //*
    cout<<"(1��)��ȣ�� �̿��� Ÿ�� ��ȯ"<<endl;
    int i = 5;
    float f = 3.45;
    int j = (int)f;
    float f2 = (float)i;
    cout << "i : " << i << "   f : " << f << endl;
    cout << "j : " << j << "   f2 : " << f2 << endl;

    int x = 10, y = 2;
    float result;
    result = (float) x / (float) y;
    cout << "x : " << x << "   y : " << y << "   result : " << result << endl;
   //*/

    //2�� �ּ�
    //*
    cout << endl << "(2��) static_cast" << endl;
    char ca = 'a';
	int k = 10;
	int number = (int)ca;
	int *p = &k;
	//number = (int)p;//���� �����ϳ� ������ ����
	//number = static_cast<int>(p);//pointer�� int�� ��ȯ�ϴ� ���� ���ϰ� ��- static_cast�� ����ϴ� ����
    int num = static_cast<int>(ca);
    cout << "ca : " << ca <<"   num : " << num << endl;

    int d = 15, e = 7;
    float r = static_cast<float> (d) / static_cast<float>(e);
    cout << "d : " << d << "   e : " << e << "   result : " << r << endl;
    //*/

    //3�� �ּ�
  ///*
    cout << endl << "(3��) const_cast" << endl;
    const int n = 10;
    //int* d = &n; 
    int* m = const_cast<int*> (&n); 
	*m = 99;//n,m�� �ּҴ� ������ ����� ���� �ٸ���- ���� �ʿ�
    //n++;
    cout << "&n : " << &n << "   m : " << m << endl;
    cout << "n : " << n << "   *m : " << *m << endl; //n�� ���� const
  //*/

    //4�� �ּ�
   //*
    Base *pb = new Derived();
    Derived *pd = NULL;
	pb = pd;
	//pb = (Base)pd;
    //pd = pb;
    pd = dynamic_cast<Derived*>(pb); 
    //*/

    //5�� �ּ�
    //*
    //reinterpret_cast - ������ type�� ������ ��ȯ

    int s = 1020;
    char *h = NULL;
    char *cp2 = NULL;
    h = (char*)s; 
    //h = static_cast<char*>(s);
    h = reinterpret_cast<char*>(s); 
    //cout <<*h<< endl; //�޸� ���� ���� �߻�
    //*/
	int nmb = 10;
	float *ptr = reinterpret_cast<float*>(&nmb);
	cout << *ptr << endl;
	system("pause");
}