#include <iostream>
using namespace std;

//���(inheritance) : ���ο� Ŭ������ ���鶧, ������ Ŭ������ ��� ������ ��� �Լ��� �״�� �����ٰ� ����ϴ� ����̴�.
//���߻�� : �������� Ŭ�����κ��� ����� �޾Ƽ� ��� 
//��ӹ��� �� Ŭ������ ��� �������� ���� ��� 

class PassengerCar {

public : 
	int seats; //�ο���
	int limits; 

	//�⺻ ������
	PassengerCar() : seats(0), limits(0) {    }

};

class Truck {

public :
	int playload; //���� �� �ִ� ����
	int limits;

	//�⺻ ������
	Truck() : playload(0), limits(0) {      }
};

//���� ��� : PassengerCar, Truck 2���� Ŭ������ ���
//����) class ���ο�(���� �ڽ�, �Ļ�) Ŭ������ : ���������� ����(�θ�) Ŭ������
class Pickup : public PassengerCar, public Truck {

public:
	int capability; //���δɷ�
	int limits;

	//�⺻ ������
	Pickup() : capability(0), limits(0) {        }

};
int main(void) {
	//��ü ����
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

	//����� Ŭ�������� ������տ� ������ ������(::)�� �̿��ؼ� ��ȿ������ �����Ѵ�
	my_car.PassengerCar::limits = 6;
	my_car.Truck::limits = 15000;
	my_car.Pickup::limits = 250000;

	cout << "my_car.PassengerCar::limits" << my_car.PassengerCar::limits << endl;
	cout << "my_car.Truck::limits" << my_car.Truck::limits << endl;
	cout << "my_car.Pickup::limits" << my_car.Pickup::limits << endl;
	cout << "----------------------" << endl;

	return 0;
}