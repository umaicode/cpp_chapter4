//4��-3.POINTER_ARRAY.cpp   4.3 pointer ������ reference ����
#include <iostream>
using namespace std;
#define NWEEK 5
int main(void)
{   //*week[N]�� working[N][]�� ������ ����
    char *week[NWEEK] = {
		"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	//week[0] = "abcddddd";//�����Ѵ� �� ������?
	char working[NWEEK][10] = {"Mon", "Tue", "Wed", "Thu", "Fri"};//char *p[10] == char p[10][20]

	week[1] = "Sat"; //week[1]�� lvalue�̴�
	//working[0] = "null"; //lvalue�� �ƴϴ�
	week[0] = working[4]; //week�� working�� ȣȯ
    cout<< "week[0] = "<< week[0] << endl <<"week[1] = "<< week[1]<<endl;
	cout<<"working[0] = "<<working[0]<<endl<<"working[1] = "<<working[1]<<endl;
	system("pause");
	return 0;
}