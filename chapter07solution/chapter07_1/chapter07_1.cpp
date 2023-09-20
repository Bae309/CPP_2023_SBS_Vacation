#include <iostream>

using namespace std;

class Calculator {

public : 
	double add(double a, double b); //함수 원형 선언
	double sub(double a, double b);
	double mul(double a, double b);
	double ddiv(double a, double b);
};

//함수 정의는 클래스 바깥에 해도 상관없다.
//함수명 앞에 클래스 이름 :: 형식을 지정해야 한다.
double Calculator::add(double a, double b) { //함수 정의 
	return a + b;
}

double Calculator::sub(double a, double b) { //함수 정의 
	return a - b;
}

double Calculator::mul(double a, double b) { //함수 정의 
	return a * b;
}

double Calculator::ddiv(double a, double b) { //함수 정의 
	return a / b;
}

int main(void) {

	int menu; //1: 더하기, 2: 빼기, 3. 곱하기, 4.나누기 메뉴를 선택하도록 입력받는 변수
	double a = 0, b = 0; //계산할 매개변수값을 저장하는 a,b변수

	//객체 생성 : 메모리공간에 실제로 메서드를 배치한다.
	Calculator cal;

	//키보드로 직접 a,b변수의 매개변수를 입력받아서 저장해서 처리하기

	while (1) {

		cout << "1.덧셈\n2.뺄셈\n3.곱셈\n4.나눗셈\n";
		cout << "선택 (메뉴 : 1,2,3,4만 선택 가능) >>";
		cin >> menu;
		cout << "--------------------------------" << endl;

		switch (menu) {
		case 1: //더하기 연산 수행하는 과정
			cout << "2개의 숫자를 입력하세요 >>> ";
			cin >> a >> b;
			cout << a << "+" << b << "=" << cal.add(a, b) << endl;
			break;

		case 2: //빼기 연산 수행하는 과정
			cout << "2개의 숫자를 입력하세요 >>> ";
			cin >> a >> b;
			cout << a << "-" << b << "=" << cal.sub(a, b) << endl;
			break;

		case 3: //곱하기 연산 수행하는 과정
			cout << "2개의 숫자를 입력하세요 >>> ";
			cin >> a >> b;
			cout << a << "*" << b << "=" << cal.mul(a, b) << endl;
			break;

		case 4: //나누기 연산 수행하는 과정
			cout << "2개의 숫자를 입력하세요 >>> ";
			cin >> a >> b;
			cout << a << "/" << b << "=" << cal.ddiv(a, b) << endl;
			break;
		}

		//while(1) :무한 반복 제어
		if (menu <= 0 || menu >= 5) {
			cout << "없는 메뉴 입니다. 프로그램을 종료합니다.";
			break;
		}
		cout << "============================" << endl;

	}
		




	return 0;
}

