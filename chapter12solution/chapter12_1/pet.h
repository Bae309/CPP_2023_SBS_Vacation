#include <iostream>
using namespace std;
//구현할 클래스의 변수나 함수의 원형만 존재한다.
//원형만 선언해놓으면 정의해놓은 어느 곳에서나 해당되느 내용을 불러와서 수행 가능하다.

//동적 할당 : heap영역에 메모리 공간을 할당받아서 사용하고 사용이 끝나면 반드시 반납해야 하는 기능이다.
//동적 할당 : new / delete 키워드 사용

//형식) 자료형 *(포인터)변수명 = new 자료형;
//형식) delete (포인터)변수명

class Dog {

public:
	string name;//이름
	int age;

	Dog(); //기본 생성자 함수 원형 선언
	Dog(string name, int age); //일반 생성자 함수 원형 선언
	void show(); //멤버 변수에 저장된 데이터 값을 출력해주는 일반 함수 원형 선언
	~Dog(); //소멸자 함수 원형 선언
};