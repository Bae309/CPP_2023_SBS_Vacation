#include "pet.h" //��ó�� ���


//�⺻ ������
Dog::Dog() : name("�ٵ���"), age(1) {
	cout << "Dog() �⺻ ������ ȣ��" << this << endl;
}

//�Ϲ� ������
Dog::Dog(string name, int age) : name(name), age(age) {
	cout << "Dog(string name, int age) �Ϲ� ������ ȣ��" << this << endl;
}

//��� ������ ����� ������ ���� ������ִ� �Ϲ� �Լ� ���� 
void Dog::show() { 
	cout << "�̸� : " << this->name << endl;
	cout << "���� : " << age << endl;
}

//�Ҹ��� :  : ��ü ����� ������ ȣ��Ǵ� Ư���� �Լ�
Dog::~Dog() { cout << "~Dog �Ҹ��� ȣ��" << this << endl; };