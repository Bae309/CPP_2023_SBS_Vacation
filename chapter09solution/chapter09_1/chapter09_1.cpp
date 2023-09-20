#include <iostream>

using namespace std;

class Rectangle {

public:
	int width;
	int height;

	//기본 생성자 함수 작성
	//멤버 초기화 리스트 형식 : 멤버 변수들을 좀 더 쉽게 초기화 할 수 있다.
	/*
	Rectangle() {
		//width = 10;
		//height = 5;
	}
	*/
	Rectangle() :width(0), height(0) {

	}

	//일반 함수(메서드) : 사각형의 넓이를 계산
	void area_func() {
		cout << width * height << endl;
	}


};

int main(void) {

	//기본 생성자가 호출되어서 멤버 변수에 데이터값이 초기화 된다.
	Rectangle rect;
	cout << "rect.width = " << rect.width << endl;
	cout << "rect1.height = " << rect.height << endl;
	rect.area_func();
	cout << "------------------------" << endl;


	Rectangle rect1;
	cout << "rect1.width = " << rect1.width << endl;
	cout << "rect1.height = " << rect1.height << endl;
	rect1.area_func();
	cout << "------------------------" << endl;









	return 0;
}