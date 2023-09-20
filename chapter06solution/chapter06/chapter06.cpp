#include <iostream>
#include <string> //문자열을 처리하는 함수가 들어 있는 라이브러리
#include <cstdlib> //난수를 발행시키는 함수가 들어있는 라이브러리 
#include <ctime> //시간을 설정하는 함수가 들어있는 라이브러리

using namespace std;

int main(void) {
	//문자열(string)

	/*
	//c-string 방식
	char name[20] = "배성윤";

	//c++ 방식
	//              [0][1]
	//string s = "when in Rome, do as the Romans";
	//string s = "우리나라 대한민국"; //한글은 문자하나가 2바이트 크기이다.(메모리 2개가 문자 하나를 이룬다.)
	
	//요소에 접근
	cout << "s = " << s << endl;
	cout << "s[0] = " << s[0] << endl;
	cout << "------------------------" << endl;

	//문자열 개수 알아보기
	cout << "문자열의 개수 (s.length()) = " << s.length() << endl;

	//문자열 출력
	//for문을 이용한 요소 하나 하나 단위로 출력
	for (int i = 0; i< s.length(); i++) {
		cout << "s[" << i << "] = ";
		cout << s[i] << endl;
	}

	//for ~ each문 (배열 전용 for문)
	//형식) for (배열에서 꺼내온 요소값을 저장하는 변수명 : 배열명) {반복처리 내용}

	for (char x : s) { //영문은 char 형으로 처리
		cout << "x = " << x << endl;
	}
	*/

	/*
	//한글은 문자하나가 2바이트 크기이다.(메모리 2개가 문자 하나를 이룬다.)
	string name = "철수";
	string name1 = "영희";
	string name2 = "길동";

	//string s = "우리나라 대한민국"
	string s[] = { 
		{"우"}, //1행
		{"리"}, //2행
		{"나"}, //3행
		{"라"}, //4행
		{"대"}, //5행
		{"한"}, //6행
		{"민"}, //7행
		{"국"}  //8행
	};

	//                     [0]행   [1]행  [2]행
	string list[] = { "철수","영희","길동" };

	//요소에 접근
	cout << "list = " << list << endl;
	cout << "list[0] = " << list[0] << endl;
	cout << "------------------------" << endl;

	//for ~ each문 (배열 전용 for문)
	//형식) for (배열에서 꺼내온 요소값을 저장하는 변수명 : 배열명) {반복처리 내용}
	for (string x1 : list) { //한글은 string형으로 처리
		cout << x1 << "야 안녕" << endl;
	}
	cout << "---------------------------" << endl;
	*/

	/*
	//난수 발생(임의의 수)
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << "-------------------" << endl;

	//현재시간 표시
	cout << "현재시간표시" << time(NULL) << endl;
	cout << "-------------------" << endl;

	//seed값을 지정해서 난수 발생시에 숫자를 변경시킬수 있는 값으로 만들어주는 함수
	//형식)srand(현재시간을 seed값으로 지정)
	srand(time(NULL));

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << "-------------------" << endl;

	for (int i = 1; i <= 5; i++) {

		//                 1 % 5 = 1
		//                 2 % 5 = 2
		//                 3 % 5 = 3
		//                 4 % 5 = 4
		//                 5 % 5 = 0
		//                 6 % 5 = 1
		//                 7 % 5 = 2
		//                 8 % 5 = 3
		//               12 % 5 = 2
		cout << rand() % 45 +1 << endl; //0~4까지의 난수 범위를 설정한다.
	}
	*/

	//행맨 게임  :컴퓨터에 저장해놓은 문자열 맞추기 게임

	char ch; //키보드에서 사용자가 입력한 문자를 저장하는 변수
	string solution; //컴퓨터에서 저장해놓은 문자열 중에서 선택된 문자열이 저장되는 변수

	//컴퓨터에 저장해놓은 문자열 문제 항목
	string list[] = {
		"the",						//list[0] 0행
		"c++",						//list[1] 1행
		"programming",			//list[2] 2행
		"language"					//list[3] 3행
	};

	//list[]배열의 번호중에서 임의의 번호를 컴퓨터가 선택하기 위한 난수 발생
	srand(time(NULL));
	int n = rand() % 4; //0~3까지 정수 임의의 수 발생
	cout << "컴퓨터가 발생시킨 숫자 : " << n << endl;
	cout << "--------------------" << endl;

	//문제에 대상인 문자열을 선택해서 solution 변수에 저장

	solution = list[n];
	//cout << "solution = " << solution << endl;

	//선택된 문제의 문자열의 길이를 표현한다.[**************표시]
	string guess(solution.length(), '*');
	cout << "guess = " << guess << endl;

	while (true) {

		cout << "guess = " << guess << endl;

		cout << "추측하는 문자 하나를 입력하세요 >>> " << endl;

		cin >> ch; //키보드에서 사용자가  ***표시된 문자열을 만들기 위해서 입력하는 문자 하나를 ch 변수에 저장

		for (int i = 0; i < solution.length(); i++) {

			if (ch == solution[i]) {
				guess[i] = ch;
			}
		}

		if (solution == guess) {
			cout << solution << endl;
			cout << "성공하였습니다!";
			break;
		}
	}
	
	return 0;
}