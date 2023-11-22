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
	cout << "\n1. 정보 입력(최대 5명) " << endl;
	cout << "2. 입력한 정보 출력 " << endl;
	cout << "3. 이름으로 검색 " << endl;
	cout << "4. 번호로 검색 " << endl;
	cout << "5. 이름을 입력 후 그사람의 평균, 석차 출력 " << endl;
	cout << "6. 평균점수가 높은순으로 이름을 출력 " << endl;
	cout << "종료를 원하시면 Q , q 입력 " << endl;
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