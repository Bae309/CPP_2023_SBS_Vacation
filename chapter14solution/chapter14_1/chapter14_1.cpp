#include <iostream>
using namespace std;
//다형성(Polymorphsim) : 객체지향 프로그래밍 기법의 특징중의 하나로써 동일한 코드로 다양한 타입의 객체를 처리한 기술이다.
//상속 받은 각 클래스의 멤버 함수명이 같은 경우

//함수 오버로딩(Overloading) : 함수명은 동일한데 매개변수의 자료형이나 개수가 다르면 여러개 만들어놓고 사용할 수 있다.(함수 중복)
//함수를 다루는 다형성(함수 오버라이딩(Overriding) : 함수 재정의)


//** 함수 오버라이딩(Overriding) : 함수 재정의 
//1. 상속시에만 사용되고, 함수명과 매개변수의 자료형, 개수들이 모두 동일해야 한다.
//2. 부모에게 물려받은 이름이 동일한 함수를 자식이 {      }내의 처리내용만 고쳐서 사용하라는 의미이다.
//**오버라이딩된 함수는 상속해준 부모함수를 사용하지 않고, 오버라이딩 되어있는 자식의 함수로 반드시 수행하게 된다.

class Animal {

public:

	//함수명과 매개변수의 형태가 동일한 함수가 자식(하위)에 존재하면 오버라이딩(Overriding)되었다고 처리된다.
	void speak() {
		cout << "동물이 소리를 내고 있음!" << endl;
	}

};

class Dog : public Animal { //Animal 클래스를 상속받은 Dog클래스

public:
	int age;

	//기본 생성자
	Dog() : age(0) {          }

	//오버라이딩 되었다고 처리한다 -> 객체 생성시에 자식(하위)변수를 사용한다. 
	//부모(상위)에게서 물려받아서 자식(하위)이 내용만 고쳐서 사용하다고 처리된다.
	void speak() {
		cout << "멍멍!" << endl;
	}
};

class Cat : public Animal { //Animal 클래스를 상속받은 Cat클래스
public:

	void speak() {
		cout << "야옹!" << endl;
	}

};

int main(void) {

	/*
	//정적 할당
	Animal ani;
	ani.speak();
	cout << "-------------------------------" << endl;

	Dog dog;
	dog.age = 3;
	dog.speak();
	cout << "-------------------------------" << endl;

	Cat cat;
	cat.speak();
	cout << "-------------------------------" << endl;
	*/

	//동적 할당 : Heap 영역에 메모리공간을 할당받아서 사용하고 사용이 끝나면 반납해야 한다.
	//new와 delete 키워드를 사용한다.

	//다형성 : 상위(부모) 클래스 타입으로 사용, 하위(자식) 클래스 타입으로 사용

	//1. 상향 형변환 : 업케스팅(upcasting)
	//2. 하향 형변환 : 다운케스팅(downcasting)

	cout << "-----객체의 동적 할당-----" << endl;

	//1. 상향 형변환 : 업케스팅(upcasting)
	//-> 상속을 받은 클래스는 자신의 멤버 + 상위(부모) 멤버
	//-> 상위(부모)멤버들만 사용할 수 있도록 제한한다.

	/*int a = 10;
	int* a = new int;*/

	/*
	Animal* a1;
	Dog* dd = new Dog; // -> 상속을 받은 클래스는 자신의 멤버 + 상위(부모) 멤버
	a1 = (Animal*)dd;

	a1->speak();
	cout << "-------------------------------" << endl;
	*/

	//Animal 클래스(부모)의 speak() 맴버 함수를 사용한다.
	//기본은 오버라이드된 자신(Dog)의 speak() 함수를 사용하게 되어있다.
	Animal* a1 = new Dog;
	a1->speak();
	//a1->age; //멤버변수가 사용되지 않는다.
	cout << "-------------------------------" << endl;

	//Animal 클래스(부모)의 speak() 맴버 함수를 사용한다.
	//기본은 오버라이드된 자신(Cat)의 speak() 함수를 사용하게 되어있다.
	Animal* aa1 = new Cat;
	aa1->speak();
	cout << "-------------------------------" << endl;

	//2. 하향 형변환 : 다운케스팅(downcasting)
	//업케스팅되어서 사용할 수 없었던 하위(자식) 멤버들을 사용할 수 있도록 되돌리는 것이다.
	//Animal 클래스(부모)의 Speak() 멤버 함수만 사용할 수 있었던 것을 자신의 것도 합쳐서 사용할 수 있도록 한다.
	//오버라이드된 자신(Cat)의 speak()함수를 사용하게 한다.

	Dog* dd1 = (Dog*)a1;
	dd1->age = 2;
	cout << "나이 : " << dd1->age << endl;
	dd1->speak();

	delete a1;
	delete aa1;
	//delete dd1;

	// Dog* dd2 = new Animal;  //형식은 사용할 수 없다.


	return 0;
}