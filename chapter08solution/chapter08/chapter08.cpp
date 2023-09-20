#include <iostream>

using namespace std;

//피자(원)의 넓이를 구하는 클래스 작성
//클래스(class) : 설계도이다. 동작을 할수도, 데이터 값을 넣을 수도 없다.

//접근 제어자 : public(접근가능:사용가능), protected, private
class Circle {

public :
	//                               5
	double area_func(double radius){
		//반지름 = 반지름 * 반지름 * 3.14
		return radius * radius * 3.14; //호출한 곳으로 결과값(반환값)을 돌려준다.
	}

};
int main(void) {

	//객체 생성 : 클래스에 만들어져 있는 변수나 함수를 실제로 메모리 공간에 배치시켜서 사용할 수 있도록 한다.
	//형식) 자료형 변수명 =10;
	int a = 10;

	//객체 생성 형식) 클래스명 변수명;
	Circle pizza;

	//double area_func(double radius) 함수(메서드) 호출
	pizza.area_func(5); //호출도 하고 결과값도 가지고 있다.
	//** 변수명(객체명)에 접근하는 형식) 변수명(객체명). 함수명(매개변수값);
	cout << "pizza.area_func(5) 결과값을 출력 = " << pizza.area_func(5) << endl;
	cout << "-----------------------------------------------" << endl;

	Circle pizza1;
	pizza1.area_func(10); //호출도 학고 결과값도 가지고 있다.
	cout << "pizza.area1_func(10) 결과값을 출력 = " << pizza1.area_func(10) << endl;
	cout << "-----------------------------------------------" << endl;

	return 0;
}