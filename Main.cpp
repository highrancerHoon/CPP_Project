#include<iostream>
#include"Class_1.h"
#include"Class_2.h"
using namespace std;

void MainFunc();


int main()
{
	while(true){ MainFunc(); }
}

void MainFunc()
{
	char a;
	cout << "\n1. ���� �Է�(�ִ� 5��) " << endl;
	cout << "2. �Է��� ���� ��� " << endl;
	cout << "3. �̸����� �˻� " << endl;
	cout << "4. ��ȣ�� �˻� " << endl;
	cout << "5. �̸��� �Է� �� �׻���� ���, ���� ��� " << endl;
	cout << "6. ��������� ���������� �̸��� ��� " << endl;
	cout << "���Ḧ ���Ͻø� Q , q �Է� " << endl;
	cout << endl;
	cin >> a;
	cout << endl;

	if (a == '1') {  InputFunc();}
	else if (a == '2') { OutputFunc(); }
	else if (a == '3') { SearchName(); }
	else if (a == '4') { SearchNum(); }
	else if (a == '5') { OutputName(); }
	else if (a == '6') { AvgSort(); }
	else if (a == 'q' || a == 'Q') { EndProgram(); }

}