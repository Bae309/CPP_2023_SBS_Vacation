#include <iostream>

using namespace std;

class Rectangle {

public:
	int width;
	int height;

	//�⺻ ������ �Լ� �ۼ�
	//��� �ʱ�ȭ ����Ʈ ���� : ��� �������� �� �� ���� �ʱ�ȭ �� �� �ִ�.
	/*
	Rectangle() {
		//width = 10;
		//height = 5;
	}
	*/
	Rectangle() :width(0), height(0) {

	}

	//�Ϲ� �Լ�(�޼���) : �簢���� ���̸� ���
	void area_func() {
		cout << width * height << endl;
	}


};

int main(void) {

	//�⺻ �����ڰ� ȣ��Ǿ ��� ������ �����Ͱ��� �ʱ�ȭ �ȴ�.
	Rectangle rect;
	cout << "rect.width = " << rect.width << endl;
	cout << "rect1.height = " << rect.height << endl;
	rect.area_func();
	cout << "------------------------" << endl;


	Rectangle rect1;
	cout << "rect1.width = " << rect1.width << endl;
	cout << "rect1.height = " << rect1.height << endl;
	rect1.area_func();
	cout << "------------------------" << endl;









	return 0;
}