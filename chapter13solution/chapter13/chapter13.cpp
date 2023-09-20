#include <iostream>

using namespace std;

//상속(inheritance)과 다형성
//상속(inheritance) -> 코드의 재사용성
//->새로운 클래스를 만들때, 기존의 만들어진 클래스의 맴버들을 그대로 가져다가 사용할 수 있도록 하는 방법이다.


//접근제어자 : public(접근가능), protected, private(접근불가능)
class Shape {

	int x, y; //멤버 변수
	
public:
	//기본 생성자 형식
	Shape() : x(0), y(0) {
		cout << "Shape() : x(0), y(0) 기본생성자 호출" << this << endl;
	}

	//일반 생성자 형식

	//           _x           _y    :  _x(10)  _y(10)
	Shape(int xloc, int yloc) : x(xloc), y(yloc){
		cout << "Shape(int xloc, int yloc) : x(xloc), y(yloc) 일반생성자 호출" << this << endl;
	}

	//소멸자
	~Shape() {
		cout << "~Shape 소멸자 호출" << this << endl;
	}

	//멤버 변수내의 데이터값을 출력하는 사용자 정의함수 형식
	void show() {
		cout << "x = " << ", y = " << y << endl;
	}

};

//새로운 클래스를 만들때 가본의 클래스를 상속받아서 사용한다.
//형식) class 새로운 클래스명 : 접근제어자 상속해주는 클래스명 {    새로 구현할 멤버들 정의(변수, 함수)     };
//자식(하위, 파생) 클래스명 : public 부모(상위) 클래스명 {         };
class Rectangle : public Shape {

	int width, height;

public:
	//일반 생성자 함수 형식
	//Shape(_x, _y) : x,y 멤버 변수는 부모 클래스(Shape)에 있다.
	//Shape(int xloc, int yloc) : x(xloc), y(yloc) 부모 클래스의 일반 생성자 형식을 호출해서 밀려서
	//x,y 멤버 변수의 데이터값을 초기화해서 객체 생성
	// **Shape(int xloc, int yloc) : x(xloc), y(yloc) : xloc <- _x, yloc <- _y매개변수값을 넣어준다.

	//Rectangle r (10,   10,      100,           100);                  10, 10
	Rectangle(int _x, int _y, int _width, int _height) : Shape(_x, _y) {
		//x = _x;
		//y = _y;
		width = _width; //Rectangle 멤버 변수
		height = _height; //Rectangle 멤버 변수
		cout << "Rectangle(int _x, int _y, int _width, int _height) : Shape(_x, _y) 일반 생성자 호출" << this << endl;
	}
	
	//소멸자
	~Rectangle() {
		cout << "~Rectangle 소멸자 호출" << this << endl;
	}

	//멤버 변수내의 저장된 데이터값을 출력하는 사용자 정의 함수 작성
	void show1() {
		this->show();
		//cout << "x = " << x << ", y = " << y << endl;
		cout << "width = " << width << ", height = " << height << endl;
	}

};

int main(void) {
	//객체 생성
	//Shape() : x(0), y(0) 기본 생성자가 호출되어서 멤버 변수에 데이터값을 초기화해서 객체를 생성한다.
	Shape s;
	s.show();
	cout << "-----------------------------" << endl;

	//Shape(int xloc, int yloc) : x(xloc), y(yloc) 일반생성자가 호출되어서 멤버 변수에 데이터값을 초가화해서 객체를 생성한다.
	Shape s1(10, 10);
	s1.show();
	cout << "-----------------------------" << endl;

	//Rectangle(int _x, int _y, int _width, int _height) : Shape(_x, _y) 일반생성자 호출해서 멤버 변수의 데이터값을 초가화헤서 객체를 
	Rectangle r(10, 10, 100, 100);
	r.show1();

	return 0;
}