#include "pet.h"

int main(void) {

	//첫번째 객체 생성 : 기본 생성자 호출해서 맴버 변수에 데이터값을 초기화해서 객체를 생성한다.
	Dog dog; //정적 할당
	dog.show();
	cout << "-------------------------" << endl;

	//두번째 객체 생성 : 일반 생성자 호출해서 맴버 변수에 데이터값을 초기화해서 객체를 생성한다.
	//Dog(string name, int age)
	Dog dog1("뭉치", 2);
	dog1.show();
	cout << "-------------------------" << endl;

	//세번째 객체 생성 : 동적 할당으로 생성하고 사용한다.
	cout << "동적으로 할당된 pDog 객체 생성" << endl;
	Dog* pDog = new Dog();
	(*pDog).show(); //연산자 2개를 동시에 수행하게 되면 우선순위를 정해야 한다. -> (*)
	(*pDog).name;
	(*pDog).age;
	cout << "-------------------------" << endl;

	pDog->show();
	pDog->name;
	pDog->age;

	cout << "-------------------------" << endl;
	cout << "(*pDog).name" << (*pDog).name << endl;
	cout << "(*pDog).age" << (*pDog).age << endl;

	cout << "pDog->name" << pDog->name << endl;
	cout << "pDog->age" << pDog->age << endl;

	//객체 사용이 끝나면 반납
	delete pDog;

	return 0;
}