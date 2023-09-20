#include <iostream>

using namespace std;

//�簢���� ���̸� ���ϴ� Ŭ������ ����� ����ϱ�
//���������� : ��ü�� �����ϰ� �� ��� ������ ��� �Լ��� ����(���)�� �� �ִ����� ���θ� �������ش�.
//1. public(���ٰ���), protected(��ӽÿ��� ���� ����), private(���� ���ϰ�)

class Rectangle { //Ŭ���� : ���赵�̴�.(������ �� �� ����.)

public:
	int width; //���� ->10
	int height; //���� ->5
	
	// 1. �⺻ ������ ���� : �����ڰ� ��������� ������ �����Ϸ��� �ڵ����� ���� �����ؼ� ��ü�� �����ȴ�.
	//��ü�� ������ �� ��� ������ ���� ���� �־ �ʱ�ȭ �� �� ����.
	Rectangle() {    
		width = 10;
		height = 5;
	}

	/*
	// 2. �Ϲ� ������ ���� : ��ü�� �����Ҷ� ��� ������ ���� ���� �־ �ʱ�ȭ �� �� �ִ�.
	//Rectangle rect2(100, 50);
	Rectangle(int w, int h) {

		width = w; //width = 100;
		height = h; //height = 50;
	}
	*/

	//Rectangle rect2(100, 50);

	//**thisŰ���� : ��� ������ ������� �ּ�(�޸� ����)
	//���� Ŭ���� ������ �ڽ��� ��� ����, �ɹ� �Լ��� ������ �ʿ��� ��쿡 �ٿ��ش�.
	//** Ŭ���� ������ �ɹ� ���� �̸��� �Լ��� �Ű����� �̸��� ���� ��� ��Ȯ�ϰ� this�� �ٿ��� �������־�� �Ѵ�.

	//Rectangle rect3(20,10)
	Rectangle(int width, int height) {

		//���� Ŭ���� �ɹ� ���� = ���� �ܺο��� �Է¹��� ���� ������ ���� �Ű�����
		this->width = width; // width = 20;
		this->height = height; // height = 10;
	}

	//�Ϲ� �Լ� ����
	void area_func() {
		//             10  *  5
		cout << this->width * this->height << endl; //����*����
	}

};

int main(void) {

	//������ �ʱ�ȭ��Ų�ٵ��� ���� ���߿��� ������ ��Ű�� ������ �������� �������� �ʴ´�.
	//-> ������ ���� �ʴ´�.

	//int b;
	//b = 20;
	//cout << "b����" << b;

	////��ü ���� : �޸� ������ Ŭ���� ���� �ɹ� ������ ��� ���� �Լ��� ��ġ���Ѽ� ������ ����� �� �ֵ��� �ϴ� ����̴�.
	////���� ) �ڷ��� ������ = �ʱⰪ;
	//int a = 10;

	//��ü ���� ����) Ŭ���� ������;

	//��ü�� ������ ���� �ݵ�� ������(�Լ�)�� ȣ���� �Ǿ ���ǰ� �Ǿ��ִ�.
	Rectangle rect;

	/*
	//width, height ������ ���� �ʱ�ȭ��Ű�� �ʾƼ� �������� �������� �ʴ´�.
	cout << rect.width << endl;
	cout << rect.height << endl;
	*/

	/*//width, height ������ ���� ���Խ�Ű��
	rect.width = 10;
	rect.height = 5;
	cout << "rect.width = " << rect.width << endl;
	cout << "rect.height = "<< rect.height << endl;

	//void area_func() �Լ� ȣ��(�簢���� ���̸� ����ؼ� ������ִ� ������ �ϴ� �Լ�)
	rect.area_func();


	//�ι�° ��ü ����
	//��ü�� ������ ���� �ݵ�� ������(�Լ�)�� ȣ���� �Ǿ ���ǰ� �Ǿ� �ִ�.
	//-> ��ü�� ������ �� ��� ������ �����Ͱ��� �ʱ�ȭ ��Ű��
	// Rectangle()�⺻ �����ڰ� ȣ���� �Ǿ� ��� ������ �����Ͱ��� �ʱ�ȭ �����ش�.

	Rectangle rect1;
	cout << "rect1.width = " << rect1.width << endl;
	cout << "rect1.height = " << rect1.height << endl;
	rect1.area_func();
	cout << "------------------------" << endl;

	//����° ��ü ����
	//��ü�� ������ ���� �ݵ�� ������(�Լ�)�� ȣ���� �Ǿ ���ǰ� �Ǿ� �ִ�.
	//-> ��ü�� ������ �� ��� ������ �����Ͱ��� �ʱ�ȭ ��Ű��
	//Rectangle(int w, int h) ������ �Լ� ȣ���ؼ� ��� ������ �����Ͱ��� �ʱ�ȭ ��Ű��
	Rectangle rect2(100,50);
	cout << "rect2.width = " << rect2.width << endl;
	cout << "rect2.height = " << rect2.height << endl;
	rect2.area_func();
	cout << "------------------------" << endl;
	*/

	//�׹��� ��ü ����
	//Rectangle(int width, int height) �Լ� ȣ�⿡�� ��� ������ �����Ͱ��� �ʱ�ȭ ���Ѽ� ����Ѵ�.
	Rectangle rect3(20, 10);
	cout << "rect3.width = " << rect3.width << endl;
	cout << "rect23height = " << rect3.height << endl;
	rect3.area_func();
	cout << "------------------------" << endl;

	return 0;
}