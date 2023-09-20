#include <iostream>
using namespace std;
//������(Polymorphsim) : ��ü���� ���α׷��� ����� Ư¡���� �ϳ��ν� ������ �ڵ�� �پ��� Ÿ���� ��ü�� ó���� ����̴�.
//��� ���� �� Ŭ������ ��� �Լ����� ���� ���

//�Լ� �����ε�(Overloading) : �Լ����� �����ѵ� �Ű������� �ڷ����̳� ������ �ٸ��� ������ �������� ����� �� �ִ�.(�Լ� �ߺ�)
//�Լ��� �ٷ�� ������(�Լ� �������̵�(Overriding) : �Լ� ������)


//** �Լ� �������̵�(Overriding) : �Լ� ������ 
//1. ��ӽÿ��� ���ǰ�, �Լ����� �Ű������� �ڷ���, �������� ��� �����ؾ� �Ѵ�.
//2. �θ𿡰� �������� �̸��� ������ �Լ��� �ڽ��� {      }���� ó�����븸 ���ļ� ����϶�� �ǹ��̴�.
//**�������̵��� �Լ��� ������� �θ��Լ��� ������� �ʰ�, �������̵� �Ǿ��ִ� �ڽ��� �Լ��� �ݵ�� �����ϰ� �ȴ�.

class Animal {

public:

	//�Լ����� �Ű������� ���°� ������ �Լ��� �ڽ�(����)�� �����ϸ� �������̵�(Overriding)�Ǿ��ٰ� ó���ȴ�.
	void speak() {
		cout << "������ �Ҹ��� ���� ����!" << endl;
	}

};

class Dog : public Animal { //Animal Ŭ������ ��ӹ��� DogŬ����

public:
	int age;

	//�⺻ ������
	Dog() : age(0) {          }

	//�������̵� �Ǿ��ٰ� ó���Ѵ� -> ��ü �����ÿ� �ڽ�(����)������ ����Ѵ�. 
	//�θ�(����)���Լ� �����޾Ƽ� �ڽ�(����)�� ���븸 ���ļ� ����ϴٰ� ó���ȴ�.
	void speak() {
		cout << "�۸�!" << endl;
	}
};

class Cat : public Animal { //Animal Ŭ������ ��ӹ��� CatŬ����
public:

	void speak() {
		cout << "�߿�!" << endl;
	}

};

int main(void) {

	/*
	//���� �Ҵ�
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

	//���� �Ҵ� : Heap ������ �޸𸮰����� �Ҵ�޾Ƽ� ����ϰ� ����� ������ �ݳ��ؾ� �Ѵ�.
	//new�� delete Ű���带 ����Ѵ�.

	//������ : ����(�θ�) Ŭ���� Ÿ������ ���, ����(�ڽ�) Ŭ���� Ÿ������ ���

	//1. ���� ����ȯ : ���ɽ���(upcasting)
	//2. ���� ����ȯ : �ٿ��ɽ���(downcasting)

	cout << "-----��ü�� ���� �Ҵ�-----" << endl;

	//1. ���� ����ȯ : ���ɽ���(upcasting)
	//-> ����� ���� Ŭ������ �ڽ��� ��� + ����(�θ�) ���
	//-> ����(�θ�)����鸸 ����� �� �ֵ��� �����Ѵ�.

	/*int a = 10;
	int* a = new int;*/

	/*
	Animal* a1;
	Dog* dd = new Dog; // -> ����� ���� Ŭ������ �ڽ��� ��� + ����(�θ�) ���
	a1 = (Animal*)dd;

	a1->speak();
	cout << "-------------------------------" << endl;
	*/

	//Animal Ŭ����(�θ�)�� speak() �ɹ� �Լ��� ����Ѵ�.
	//�⺻�� �������̵�� �ڽ�(Dog)�� speak() �Լ��� ����ϰ� �Ǿ��ִ�.
	Animal* a1 = new Dog;
	a1->speak();
	//a1->age; //��������� ������ �ʴ´�.
	cout << "-------------------------------" << endl;

	//Animal Ŭ����(�θ�)�� speak() �ɹ� �Լ��� ����Ѵ�.
	//�⺻�� �������̵�� �ڽ�(Cat)�� speak() �Լ��� ����ϰ� �Ǿ��ִ�.
	Animal* aa1 = new Cat;
	aa1->speak();
	cout << "-------------------------------" << endl;

	//2. ���� ����ȯ : �ٿ��ɽ���(downcasting)
	//���ɽ��õǾ ����� �� ������ ����(�ڽ�) ������� ����� �� �ֵ��� �ǵ����� ���̴�.
	//Animal Ŭ����(�θ�)�� Speak() ��� �Լ��� ����� �� �־��� ���� �ڽ��� �͵� ���ļ� ����� �� �ֵ��� �Ѵ�.
	//�������̵�� �ڽ�(Cat)�� speak()�Լ��� ����ϰ� �Ѵ�.

	Dog* dd1 = (Dog*)a1;
	dd1->age = 2;
	cout << "���� : " << dd1->age << endl;
	dd1->speak();

	delete a1;
	delete aa1;
	//delete dd1;

	// Dog* dd2 = new Animal;  //������ ����� �� ����.


	return 0;
}