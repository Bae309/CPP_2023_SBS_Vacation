#include <iostream>

using namespace std;

//**Ư���� �Լ� : 1. ������(�Լ�), 2. �Ҹ���(�Լ�), 3. ���� ������(�Լ�)

//2. �Ҹ���(�Լ�) : ��ü�� ����� ������ �ڵ����� �����Ϸ��� ���ؼ� ȣ��Ǿ� ���Ǵ� Ư���� �Լ��̴�.
//**�Ҹ��� �ۼ� ��Ģ
//1) �Լ� �̸��� Ŭ������� ���ƾ� �Ѵ�.
//2) Ŭ������ �տ� ����ǥ�� �ٿ��� ��Ÿ����.
//3) �ѹ��� ���ǵȴ�.
//4) �Ű�����, �Լ�ó�� ����� ��Ÿ���� ��ȯ�� �ڷ���, return �� ����.(void�ƴϰ� �ƿ�����.)
//����)Ŭ������� ������ �Լ���(){       }

//���������� : public, protected, private
//�簢���� ���̸� ���ϴ� Ŭ���� �����
class Rectangle {

private:
	int width;
	int height;

public:
	/*
	//1. �⺻ ������ : ��ü �����ڿ� ��� ������ �����Ͱ��� ���� �־��� �� ���� �����̴�.
	Rectangle() {     
		this->width = 0;
		this->height = 0;
	}
	*/

	//��� �ʱ�ȭ ����Ʈ ���� : C++���� �ɹ� �������� �� �� ���� �ʱ�ȭ �� �� �ִ� �����̴�.
	Rectangle():width(0), height(0){    
		cout << "Rectangle():width(0), height(0) �⺻ ������ ȣ��" << this << endl;
	}

	/*
	//2. �Ϲ� ������ ���� : ��ü �����ÿ� �ɹ� ������ �����Ͱ��� ���� �־��� �� �ִ� �����̴�.
	//Rectangle rect(100, 50) ��ü ����
	Rectangle(int width, int height) { 
		this->width = width;
		this->height = height;
	
	}
	*/
	Rectangle(int width, int height) : width(width), height(height) { 
		cout << "Rectangle(int width, int height) : width(width), height(height) �Ϲ� ������ ȣ��" << this << endl;
	}

	//�Ҹ���  :�ۼ����� ������ �����Ϸ��� �ڵ����� ���� �߰��ؼ� �����Ų��.
	~Rectangle() {
		cout << "Rectangle() �Ҹ��� ȣ��" << this << endl;
	}

	//����ڰ� �ʿ��Ҷ� ����Ϸ��� ����� ���� �Լ� -> �ڵ����� ȣ��Ǿ ���Ǵ� ���� �ƴϴ�.
	//����� ���� �Լ� -> ����� ���� ȣ���ؾ߸� ����� �� �ִ� �Լ�
	void area_func() {
		cout << width * height << endl;
		return;
	}

	//��� ���������� ����ִ� �����Ͱ��� Ȯ���ϴ� ����� ���� �Լ� �����
	void show() {
		cout << "width = " << width << ", height = " << height << endl;
	}
};

int main(void) {

	/*
	int a;
	a = 10; //int a = 10;
	cout << "a = " << a << endl;
	cout << "-------------------------------" << endl;
	*/

	//��ü ���� : Ŭ������ �޸� ������ ������ ��ġ���Ѽ� ��� ������ ��� �Լ��� ����� �� �ְ� �Ѵ�.
	//��ü�� �����ϰ� �Ǹ� �ڵ����� ������(�Լ�)�� ȣ��Ǿ ��� ������ ���� �ʱ�ȭ �����ֵ��� �Ǿ��ִ�.
	
	//ù��° ��ü ����
	//Rectangle() �⺻ �����ڰ� ȣ���� �Ǿ �ɹ� ������ ���� �ʱ�ȭ
	Rectangle rect;

	
	//�ɹ� ���� rect.width, rect.height�� �����Ͱ��� �ʱ�ȭ �Ǿ����� �ʾƼ� �������� �������� �ʴ´�.
	cout << "rect.width = " << rect.width << endl;
	cout << "rect.height = " << rect.height << endl;

	//void area_func() �Լ� ȣ�⿡�� �簢���� ���̸� ���Ѵ�.
	rect.area_func();
	

	
	//��� �������� ���� ���Խ��Ѽ� ����ϰ� �Ѵ�.
	rect.width = 10;
	rect.height = 5;

	cout << "rect.width = " << rect.width << endl;
	cout << "rect.height = " << rect.height << endl;

	//void area_func() �Լ� ȣ�⿡�� �簢���� ���̸� ���Ѵ�.
	rect.area_func();
	

	
	cout << "rect.width = " << rect.width << endl;
	cout << "rect.height = " << rect.height << endl;

	//void area_func() �Լ� ȣ�⿡�� �簢���� ���̸� ���Ѵ�.
	rect.area_func();
	cout << "------------------------------" << endl;

	
	//�ι�° ��ü ����
	//Rectangle(int width, int height) �Ϲ� ������ ������ ȣ��Ǿ ��� ������ ���� �ʱ�ȭ
	Rectangle rect1(100, 50);

	cout << "rect1.width = " << rect1.width << endl;
	cout << "rect1.height = " << rect1.height << endl;
	
	//void area_func() �Լ� ȣ�⿡�� �簢���� ���̸� ���Ѵ�.
	rect1.area_func();
	

	//����° ��ü ����
	//Rectangle() �⺻ �����ڰ� ȣ�� �Ǿ ��� ������ �����Ͱ��� �ʱ�ȭ
	Rectangle rect2;

	cout << "rect2.width = " << rect2.width << endl;
	cout << "rect2.height = " << rect2.height << endl;
	rect2.area_func();
	cout << "--------------------------" << endl;

	//�׹�° ��ü ����
	//Rectangle(int width, int height) �Ϲ� �����ڰ� ȣ��Ǿ ��� ������ �����Ͱ��� �ʱ�ȭ
	Rectangle rect3(200, 100);
	cout << "rect3.width = " << rect3.width << endl;
	cout << "rect3.height = " << rect3.height << endl;
	rect3.area_func();
	cout << "--------------------------" << endl;

	//�ټ���° ��ü ����
	//Rectangle(int width, int height) �Ϲ� ������ ������ �Լ��� ȣ��Ǿ ��� ������ �����Ͱ��� �ʱ�ȭ�Ѵ�.
	Rectangle rect4(10, 5);

	//��� �������� ���� ����ϴ� ����� ���� �Լ��� ȣ���ؼ� Ȯ��
	rect4.show();  

	//��� �������� ������ �簢���� ���̸� ���ϴ� ����� ���� �Լ��� ȣ���ؼ� Ȯ��
	rect4.area_func();

	return 0;
}