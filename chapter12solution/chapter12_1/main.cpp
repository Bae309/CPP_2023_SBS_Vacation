#include "pet.h"

int main(void) {

	//ù��° ��ü ���� : �⺻ ������ ȣ���ؼ� �ɹ� ������ �����Ͱ��� �ʱ�ȭ�ؼ� ��ü�� �����Ѵ�.
	Dog dog; //���� �Ҵ�
	dog.show();
	cout << "-------------------------" << endl;

	//�ι�° ��ü ���� : �Ϲ� ������ ȣ���ؼ� �ɹ� ������ �����Ͱ��� �ʱ�ȭ�ؼ� ��ü�� �����Ѵ�.
	//Dog(string name, int age)
	Dog dog1("��ġ", 2);
	dog1.show();
	cout << "-------------------------" << endl;

	//����° ��ü ���� : ���� �Ҵ����� �����ϰ� ����Ѵ�.
	cout << "�������� �Ҵ�� pDog ��ü ����" << endl;
	Dog* pDog = new Dog();
	(*pDog).show(); //������ 2���� ���ÿ� �����ϰ� �Ǹ� �켱������ ���ؾ� �Ѵ�. -> (*)
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

	//��ü ����� ������ �ݳ�
	delete pDog;

	return 0;
}