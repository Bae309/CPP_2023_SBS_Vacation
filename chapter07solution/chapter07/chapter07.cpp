#include <iostream>

using namespace std;

//사칙연산을 수행하는 계산기 클래스 만들기
//1. 클래스 이름은 첫번째 이름을 대문자로 표시
//2. 클래스(class) : 설계도이다. 설계도는 아무런 기능을 할 수 없다.
//3. 클래스는 객체(object)를 생성해야만 실제로 기능을 할 수 있다.
//4. 객체(object) : 설계도에 정의된 변수나 함수(매서드)를 실제로 사용할 수 있도록 메모리 공간에 배치를 시키는 기능이다.
//5. 접근제어자를 지정해서 접근(사용) 여부를 결정 : 
//public : 접근 가능
//protected : 상속시에만 접근 가능
//private: 접근 불가능(자신의 클래스 내에서만 서로 접근 가능) 

class Calculator {
	//실수(double)의 값을 입력받아서 더하는 함수(매서드) 만들기
	//                   10           5
public : 
	double add(double a, double b) {
		return a + b; //호출한 곳으로 반환값을 돌려준다.
	}

	double sub(double a, double b) {
		return a - b; //호출한 곳으로 반환값을 돌려준다.
	}

	double mul(double a, double b) {
		return a * b; //호출한 곳으로 반환값을 돌려준다.
	}

	double ddiv(double a, double b) {
		return a / b; //호출한 곳으로 반환값을 돌려준다.
	}
};

int main(void) {
	//자료형 변수명 = 초기값;
	int a = 10;

	//객체(Object)를 생성 : 설계도(클래스)의 맴버들을 실제로 사용할 수 있도록 메모리 공간에 배치시켜준다.
	//객체 생성 형식) 클래스명 변수명(객체명);
	Calculator cal;

	//객체(object) 내의 맴버들에 접근 형식
	//변수명(객체명), 함수명(매개변수값);
	
	//double add(double a, double b) 함수 호출
	cal.add(10, 5);

	cout << "cal.add(10, 5) 돌려받은 결과값 = " << cal.add(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.
	cout << "--------------------------------" << endl;

	//double sub(double a, double b) 함수 호출 
	cal.sub(10, 5);
	cout << "cal.sub(10, 5) 돌려받은 결과값 = " << cal.sub(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.
	cout << "--------------------------------" << endl;

	//double mul(double a, double b) 함수 호출 
	cal.mul(10, 5);
	cout << "cal.mul(10, 5) 돌려받은 결과값 = " << cal.mul(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.
	cout << "--------------------------------" << endl;

	//double divv(double a, double b) 함수 호출 
	cal.ddiv(10, 5);
	cout << "cal.ddiv(10,5) 돌려받은 결과값 = " << cal.ddiv(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.
	cout << "--------------------------------" << endl;

	/*

	//double add(double a, double b) 함수 호출 
	cout << "add(10, 5) 돌려받은 결과값 = " << add(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.
	cout << "--------------------------------" << endl;

	//double sub(double a, double b) 함수 호출 
	cout << "sub(10, 5) 돌려받은 결과값 = " << sub(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.
	cout << "--------------------------------" << endl;

	//double mul(double a, double b) 함수 호출 
	cout << "mul(10, 5) 돌려받은 결과값 = " << mul(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.
	cout << "--------------------------------" << endl;

	//double divv(double a, double b) 함수 호출 
	cout << "divv(10, 5) 돌려받은 결과값 = " << ddiv(10, 5) << endl; //호출도 하고 결과값도 저장되어 있다.
	cout << "--------------------------------" << endl;

	*/



	return 0;
}