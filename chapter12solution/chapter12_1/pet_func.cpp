#include "pet.h" //전처리 기능


//기본 생성자
Dog::Dog() : name("바둑이"), age(1) {
	cout << "Dog() 기본 생성자 호출" << this << endl;
}

//일반 생성자
Dog::Dog(string name, int age) : name(name), age(age) {
	cout << "Dog(string name, int age) 일반 생성자 호출" << this << endl;
}

//멤버 변수에 저장된 데이터 값을 출력해주는 일반 함수 형식 
void Dog::show() { 
	cout << "이름 : " << this->name << endl;
	cout << "나이 : " << age << endl;
}

//소멸자 :  : 객체 사용이 끝나면 호출되는 특별한 함수
Dog::~Dog() { cout << "~Dog 소멸자 호출" << this << endl; };