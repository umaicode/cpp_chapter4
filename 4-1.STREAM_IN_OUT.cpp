//4-1. STREAM_IN_OUT.cpp  4.1 ���� scope�� ǥ�� �����
#include <iostream>
using namespace std;

class Person{
	/*
    ostream& operator<<(char); 
    ostream& operator<<(short);
    ostream& operator<<(int);
    ostream& operator<<(long);
    ostream& operator<<(float);
    ostream& operator<<(double);
   */
	friend ostream& operator<<(ostream& stream, const Person &p);
private:
    int idNum;
    int age;
    //23.3.23 �߰��� �ڵ�
    char* name;//�̸� field�� �߰���
    char* address;
    char dept[20];

public:
    Person() { idNum = 0; age = 0; name = nullptr; address = nullptr; }
    Person(int , int , char* , char*, char* ); 
    ~Person();
};
Person::~Person() {
    delete[]name;

}
Person::Person(int idNum, int age, char* name, char* address, char dept[]) {
    this->idNum = idNum;
    this->age = age;
    this->name = new char[20];
    strcpy(this->name, name);//_CRT_SECURE_NO_WARNINGS�� �Ӽ� > ��ó����>��ó���� ���� �����Ͽ� "_CRT_SECURE_NO_WARNINGS"�� �߰�
    int len = strlen(address) + 1;//null char�� ����
    this->address = new char[len];
    strcpy(this->address, address);
    //this->dept = dept;
    strcpy(this->dept, dept);
}
//�ּ� 1��
//* operator overloading ��뿹
ostream& operator<<(ostream& stream, const Person &p){
    stream<<"idNum =  "<<p.idNum<<", age = "<<p.age<<", name = " << p.name << ", address = "<<p.address<<", dept = "<<p.dept<<endl;
    return stream;
}
//*/
void main() {
    Person p(941111, 20, "hong", "Busan", "CPP");//2022 version���� ���� �߻��� > ����� ������Ʈ > �Ӽ�>C/C++.�ؼ����>�ƴϿ�����
    cout << "����" << p << "�Դϴ�." << endl << endl; //error - �ּ�1�� �������� ������ ���� �߻��� Ȯ��

    Person s(981212, 30, "kim", "Masan", "Java");
    cout << "����" << s << "�Դϴ�." << endl << endl;
    system("pause");
}