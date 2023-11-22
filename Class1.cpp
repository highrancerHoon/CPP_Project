#include "Class_1.h"

string name;
int number, kor, eng, math, avg;

int NameCount=0;

class Info
{
public:
	string name;
	int number, kor, eng, math, avg;

	Info(string name, int number, int kor, int eng, int math) : name(name), number(number), kor(kor), eng(eng), math(math)
	{
		avg = (kor + eng + math) / 3;
	}
	void ShowMember()
	{
		cout << "\n�̸� : " << name << endl;
		cout << "��ȣ : " << number << endl;
		cout << "���� ���� : " << kor << endl;
		cout << "���� ���� : " << eng << endl;
		cout << "���� ���� : " << math << endl;
		cout << "��� : " << avg << endl;
	}
	
};
Info* info[5];

void InputFunc() {
	
	
	if (NameCount < 5)
	{
		cout << "---------------------------------------------------" << endl;
		cout << "\n�̸� �Է� : ";
		cin >> name;
		cout << "��ȣ �Է� : ";
		cin >> number;
		cout << "���� ���� �Է� : ";
		cin >> kor;
		cout << "���� ���� �Է� : ";
		cin >> eng;
		cout << "���� ���� �Է� : ";
		cin >> math;
		cout << "---------------------------------------------------" << endl;

		info[NameCount] = new Info{ name, number, kor, eng, math };
	}
	NameCount++;
	/*if (NameCount < 5)
	{
		for(int i =3;i)
	}*/

	if (NameCount >5)
	{
		cout << "\n5���� �Ѵ� ���� �Է��� �õ��Ͽ� ������ �ʱ�ȭ �˴ϴ�." << endl;
		for(int i =0 ; i < 5 ;i++){ delete info[i]; }
		NameCount = 0;
	}
}

void OutputFunc() {
	for (int i = 0; i < NameCount; i++)
	{
		cout << "---------------------------------------------------" << endl;
		info[i]->ShowMember();
		cout << "---------------------------------------------------" << endl;
	}
}

void SearchName() { 
	string inputname;
	cout << "ã�� �̸��� �Է��ϼ��� : ";
	cin >> inputname;
	
	for (int i = 0; i < NameCount; i++)
	{
		if (info[i]->name == inputname)
		{
			cout << "---------------------------------------------------" << endl;
			cout << "\n�迭�� " << i+1 << "��°�� �����մϴ�." << endl;
			info[i]->ShowMember(); 
			cout << "---------------------------------------------------" << endl;
		}
		/*if(info[i]->name != inputname && i==NameCount-1)
		{
			cout << "\n �̸��� �������� �ʽ��ϴ�. " << endl;
		}*/
	}
}

void SearchNum() { 
	int inputnumber;
	cout << "ã�� ����� ��ȣ�� �Է��ϼ��� : ";
	cin >> inputnumber;

	for (int i = 0; i < NameCount; i++)
	{
		if (info[i]->number == inputnumber)
		{
			cout << "---------------------------------------------------" << endl;
			cout << "\n�迭�� " << i+1 << "��°�� �����մϴ�." << endl;
			info[i]->ShowMember();
			cout << "---------------------------------------------------" << endl;
		}
	/*	if ((info[i]->number != inputnumber) && i == NameCount-1)
		{
			cout << "\n�������� �ʴ� ��ȣ�Դϴ�. " << endl;
		}*/
	}
}

void OutputName() {
	string inputname;
	cout << "��հ� ������ �˰� ���� ����� �̸��� �Է��ϼ��� : ";
	cin >> inputname;

	for (int i = 0; i < NameCount - 1; i++)
	{
		for (int j = i + 1; j < NameCount; j++)
		{
			Info* temp[1];
			temp[0] = new Info{ "", 0, 0, 0, 0 };

			if (info[i]->avg < info[j]->avg)
			{
				temp[0] = info[i];
				info[i] = info[j];
				info[j] = temp[0];
			}

		}
	}
	for (int i = 0; i < NameCount; i++)
	{
		if (info[i]->name == inputname)
		{
			cout << "---------------------------------------------------" << endl;
			cout << "\n�迭�� " << i + 1 << "��°�� �����մϴ�." << endl;
			cout << info[i]->name << "�� ��� : " << info[i]->avg << endl;
			cout << "���� : " << i + 1 << "��" << endl;
			cout << "---------------------------------------------------" << endl;
		}
		if (info[i]->name != inputname && i == NameCount-1)
		{
			cout << "\n �̸��� �������� �ʽ��ϴ�. " << endl;
		}
	}
}

void AvgSort() { 
	for (int i = 0; i < NameCount-1; i++)
	{
		for(int j = i+1 ; j<NameCount;j++)
		{
			Info* temp[1];
			temp [0]=new Info{ "", 0, 0, 0, 0};

			if (info[i]->avg < info[j]->avg)
			{
				temp[0] = info[i];
				info[i] = info[j];
				info[j] = temp[0];
			}
		
		}
	}
	for (int i = 0; i < NameCount; i++)
	{
		cout << info[i]->name << endl;
	}
}

void EndProgram() {
	exit(0);
}