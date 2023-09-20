#include <iostream>
using namespace std;

//상속(inheritance) : 새로운 클래스를 만들때, 기존의 클래스의 멤버 변수나 멤버 함수를 그대로 가져다가 사용하는 방법이다.
//다중상속 : 여러개의 클래스로부터 상속을 받아서 사용 
//상속받은 각 클래스의 멤버 변수명이 같은 경우 

class PassengerCar {

public : 
	int seats; //인원수
	int limits; 

	//기본 생성자
	PassengerCar() : seats(0), limits(0) {    }

};

class Truck {

public :
	int playload; //담을 수 있는 무게
	int limits;

	//기본 생성자
	Truck() : playload(0), limits(0) {      }
};

//다중 상속 : PassengerCar, Truck 2개의 클래스를 상속
//형식) class 새로운(하위 자식, 파생) 클래스명 : 접근제어자 상위(부모) 클래스명
class Pickup : public PassengerCar, public Truck {

public:
	int capability; //견인능력
	int limits;

	//기본 생성자
	Pickup() : capability(0), limits(0) {        }

};
int main(void) {
	//객체 생성
	Pickup my_car;

	cout << "my_car.seats = " << my_car.seats << endl;
	cout << "my_car.playload = " << my_car.playload << endl;
	cout << "my_car.capability = " << my_car.capability << endl;
	cout << "my_car.limits = " << my_car.limits << endl;
	cout << "----------------------" << endl;

	my_car.seats = 4;
	my_car.playload = 10000;
	my_car.capability = 2000000;
	my_car.limits = 550;

	cout << "my_car.seats = " << my_car.seats << endl;
	cout << "my_car.playload = " << my_car.playload << endl;
	cout << "my_car.capability = " << my_car.capability << endl;
	cout << "my_car.limits = " << my_car.limits << endl;
	cout << "----------------------" << endl;

	//사용할 클래스명을 변수명앞에 스코프 연산자(::)를 이용해서 유효영역을 지정한다
	my_car.PassengerCar::limits = 6;
	my_car.Truck::limits = 15000;
	my_car.Pickup::limits = 250000;

	cout << "my_car.PassengerCar::limits" << my_car.PassengerCar::limits << endl;
	cout << "my_car.Truck::limits" << my_car.Truck::limits << endl;
	cout << "my_car.Pickup::limits" << my_car.Pickup::limits << endl;
	cout << "----------------------" << endl;

	return 0;
}