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
		cout << "\n이름 : " << name << endl;
		cout << "번호 : " << number << endl;
		cout << "국어 점수 : " << kor << endl;
		cout << "영어 점수 : " << eng << endl;
		cout << "수학 점수 : " << math << endl;
		cout << "평균 : " << avg << endl;
	}
	
};
Info* info[5];

void InputFunc() {
	
	
	if (NameCount < 5)
	{
		cout << "---------------------------------------------------" << endl;
		cout << "\n이름 입력 : ";
		cin >> name;
		cout << "번호 입력 : ";
		cin >> number;
		cout << "국어 점수 입력 : ";
		cin >> kor;
		cout << "영어 점수 입력 : ";
		cin >> eng;
		cout << "수학 점수 입력 : ";
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
		cout << "\n5명이 넘는 정보 입력을 시도하여 내용이 초기화 됩니다." << endl;
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
	cout << "찾을 이름을 입력하세요 : ";
	cin >> inputname;
	
	for (int i = 0; i < NameCount; i++)
	{
		if (info[i]->name == inputname)
		{
			cout << "---------------------------------------------------" << endl;
			cout << "\n배열의 " << i+1 << "번째에 존재합니다." << endl;
			info[i]->ShowMember(); 
			cout << "---------------------------------------------------" << endl;
		}
		/*if(info[i]->name != inputname && i==NameCount-1)
		{
			cout << "\n 이름이 존재하지 않습니다. " << endl;
		}*/
	}
}

void SearchNum() { 
	int inputnumber;
	cout << "찾는 사람의 번호를 입력하세요 : ";
	cin >> inputnumber;

	for (int i = 0; i < NameCount; i++)
	{
		if (info[i]->number == inputnumber)
		{
			cout << "---------------------------------------------------" << endl;
			cout << "\n배열의 " << i+1 << "번째에 존재합니다." << endl;
			info[i]->ShowMember();
			cout << "---------------------------------------------------" << endl;
		}
	/*	if ((info[i]->number != inputnumber) && i == NameCount-1)
		{
			cout << "\n존재하지 않는 번호입니다. " << endl;
		}*/
	}
}

void OutputName() {
	string inputname;
	cout << "평균과 석차를 알고 싶은 사람의 이름을 입력하세요 : ";
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
			cout << "\n배열의 " << i + 1 << "번째에 존재합니다." << endl;
			cout << info[i]->name << "의 평균 : " << info[i]->avg << endl;
			cout << "석차 : " << i + 1 << "등" << endl;
			cout << "---------------------------------------------------" << endl;
		}
		if (info[i]->name != inputname && i == NameCount-1)
		{
			cout << "\n 이름이 존재하지 않습니다. " << endl;
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