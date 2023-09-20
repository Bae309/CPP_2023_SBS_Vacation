#include <iostream>

using namespace std;

//함수의 종류
//1. 일반 함수 : 사용자 정의 함수로 만들어서 필요할때마다 호출해서 사용하는 형식
//2. 특별한 함수 : 컴파일러가 자동으로 수행되는 형식

//** 특별한 함수 : 생성자(함수), 소멸자(함수), 복사생성자(함수)
//-> 기능을 할때자동으로 호출이 되어서 한번만 사용이 된다.

//1)생성자(함수) : 객체를 생성할 때 자동으로 호출이 되어서 사용되는 함수이다.
//->객체를 생성시에 한번만 자동으로 호출이 되어서 사용되고 멤버 변수에 데이터값을 초기화시키는 역할을 한다.

//2)생성자 함수를 만드는 규칙
//->함수이름은 클래스 이름과 같아야 한다.
//->함수의 {  }내에 처리할 내용은 멤버 변수에 데이터값을 대입(초기화)시키는 기능에 관련된 내용만 적고 처리한다.
//->반환값자료형이 없다.(void아니고 아예없음, return 반환값도 없음)
//->함수 오버로딩 기능을 사용해서 매개변수가 다른 여러개의 생성자함수를 만들어놓고 사용할 수 있다.
//형식) 클래스이름과 동일한 함수명( 매개변수 ) {     맴버변수에 데이터값을 대입(초기화) 시키는 기능     }

//3)생성자(함수)의 형식
//1. 기본 생성자 형식 : 객체를 생성할 때 맴버 변수에 데이터값을 직접 넣어서 초기화 할 수 없는 형식이다.
//2. 일반 생성자 형식 : 객체를 생성할 때 맴버 변수에 데이터값을 직접 넣어서 초기화 할 수 있는 형식이다.


////피자(원)의 넓이를 구하는 클래스 작성

class Circle {

public:

	//      5
	int radius; //반지름 값을 가지고 있는 멤버 변수

	//1. 기본 생성자 형식
	Circle() {     
		radius = 5;
	}

	//2. 일반 생성자 형식 : 객체를 생성할 때 맴버 변수에 데이터값을 직접 넣어서 초기화될 수 있는 형식이다.
	Circle(double sc) {
		radius = sc;
	}

	double area_func() {
		//반지름 * 반지름 * 3.14
		return radius * radius * 3.14; //호출한 곳으로 결과값을 돌려주어야 한다.
	}

};
int main(void) {

	/*
	//객체 생성 : 클래스에 만들어져 있는 변수나 함수를 실제로 메모리 공간에 배치시켜서 사용할 수 있도록 한다.
	Circle pizza;

	////radius변수가 초기화가 되어 있지 않기 때문에 컴파일을 시켜주지 않는다.
	////radius변수를 초기화시키는 작업부터 먼저 해야 한다.
	//cout << "pizza.radius 멤버 변수값 = " << pizza.radius << endl;
	//cout << "pizza.area_func() 함수값 결과 출력 = " << pizza.area_func() << endl;
	//cout << "------------------------------------------------------" << endl;

	//radius 변수에 데이터값을 대입시킨 후에 결과값 확인
	pizza.radius = 5;
	cout << "pizza.radius 멤버 변수값 = " << pizza.radius << endl;
	cout << "pizza.area_func() 함수값 결과 출력 = " << pizza.area_func() << endl;
	cout << "------------------------------------------------------" << endl;
	*/
	
	//두번째 객체 생성
	//객체 생성시에 기본 생성자 형식의 생성자(함수)가 호출이 되어서 자동으로 수행된다.

	//1. 기본 생성자 형식이 호출된다. (Circle() 생성자 형식)
	Circle pizza1; //객체를 생성하면 생성자(함수)가 호출이 되어서 자동으로 수행한다.
	cout << "pizza1.radius 멤버 변수값 = " << pizza1.radius << endl;
	cout << "pizza1.area_func() 함수값 결과 출력 = " << pizza1.area_func() << endl;
	cout << "-----------------------------------------------" << endl;

	//세번째 객체 색성
	//2. 일반 생성자 형식이 호출된다. (Circle(double sc) 생산자 형식)
	Circle pizza2(10); //객체를 생성하면 생성자(함수)가 호출이 되어서 자동으로 수행된다.
	cout << "pizza2.radius 멤버 변수값 = " << pizza2.radius << endl;
	cout << "pizza2.area_func() 함수값 결과 출력 = " << pizza2.area_func() << endl;
	cout << "-----------------------------------------------" << endl;

	return 0;
}