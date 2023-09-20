#include <iostream>

using namespace std;

//Ư���� �Լ� : 1. ������(�Լ�), �Ҹ��� (�Լ�), ���� ������
//���� ������ : public(���ٰ��� : ��밡��), protected(���� �Ұ��� : ��� �Ұ���), private(���� �Ұ��� : ��� �Ұ���)
//������ �Լ��� ������(�Լ�) ����� -> ����� ���� �Լ� ������� �ʿ信 ���� ���� ����Ѵ�.

//�ﰢ���� ���̸� ���ϴ� Ŭ������ �ۼ��ϰ� ��ü�� �����ϱ�
//�ﰢ���� ���� = �ظ� * ���� / 2
class Triangle {

private:
	int height; //����
	int width; //�ظ�
	
public:
	//1. �⺻ ������ ����
	/*
	Triangle() {
		this->width = 0;
		this->height = 0;
	}*/

	//��� �ʱ�ȭ ����Ʈ ���� : C++���� �����ϴ� ��� �������� �� �� ���� �ʱ�ȭ�� �� �ִ� ����
	Triangle() : width(0), height(0) {
		cout << "Triangle() : width(0), height(0) �⺻ ������ ȣ��" << this << endl;
	}

	//2. �Ϲ� ������ ����

	//Triangle(int width, int height) {
	//	this->width = width;
	//	this->height = height;
	//}

	//Triangle tri1(10,5) ��ü ����
	Triangle(int width, int height) : width(width), height(height) {
		cout << "Triangle(int width, int height) : width(width), height(height) �Ϲ� ������ ȣ��" << this << endl;
	}
	
	//3. �Ҹ��� : ��ü�� ����� ������ �޸𸮰������� ����(����)�ϴ� �Լ�(�ڵ����� ȣ���� �Ǿ ���ȴ�.)
	~Triangle() {   
		cout << "~Triangle() �Ҹ��� ȣ��" << this << endl;
	}

	//����� ���� �Լ� : �ﰢ���� ���̸� ���ϴ� �Լ�
	void area_func() {
		cout << "�ﰢ���� ���� = " << width * height / 2 << endl;
		return;
	}

	//����� ���� �Լ� : �ɹ� �������� ����� ���� ����ϴ� �Լ�
	void show() {
		cout << "width = " << width << ", height = " << height << endl;

	}

	//������ �Լ��� ������(�Լ�) ����� -> ����� ���� �Լ� ������� �ʿ信 ���� ���� ����Ѵ�.
	//����(getter)�� ����(setter) �Լ�

	//������(�Լ�) �����(setter) : private���� ���� ���ϵ��� ���Ƴ��� �ɹ� ������ ���ο� ���� �����ϴ� ����� �ϴ� �Լ� �ۼ�

	//                        10
	void setWidth(int width) {
		this->width = width;
	}

	//                       5
	void setHeight(int height) {
		this->height = height;
	}

	//������(�Լ�) �����(getter) : private���� ���� ���ϵ��� ���Ƴ��� ��� ������ ����� �����Ͱ��� �������� ����� �ϴ� �Լ� �ۼ�
	int getWidth() {
		return width; //��� ���� width�� ����� �����Ͱ��� ȣ���� ������ �����ش�.
	}

	int getHeight() {
		return height; //��� ���� width�� ����� �����Ͱ��� ȣ���� ������ �����ش�.
	}

};

int main(void) {

	//��ü ���� : Ŭ������ �ɹ� ������ �Լ��� �޸� ������ ��ġ���Ѽ� ������ ����� �� �ְ� �ϴ� ��
	int a = 10;

	//��ü �����ÿ��� �ݵ�� ������ �Լ��� ȣ��Ǿ ��� ������ �����Ͱ��� �ʱ�ȭ���Ѽ� ����Ѵ�.
	//Triangle() : width(0), height(0) �⺻ �����ڰ� ȣ��Ǿ ��� ������ �����Ͱ��� �ʱ�ȭ���Ѽ� ����Ѵ�.
	Triangle tri;

	tri.show(); //��� �������� ����� ���� ����ϴ� �Լ� ȣ�� ���
	tri.area_func(); //�ﰢ���� ���̸� �ڵ����� �����ִ� �Լ�ȣ�� ���

	/*/
	//��� ������ ������� public�� ��� ����ϴ� ���
	//0������ �ʱ�ȭ �Ǿ��ִ� ��� ������ ���ο� ���� �����ؼ� ����ؼ� ����ϱ� 
	tri.width = 100;
	tri.height = 20;

	tri.show();
	tri.area_func();
	*/

	//��� ������ ������� public�� ��� ����ϴ� ���
	
	//1. ��� ������ ���ο� �����Ͱ��� �����ϴ� �Լ��� ���� ȣ���ؼ� �־��ֱ�
	//void setWidth(int width) �Լ� ȣ��
	tri.setWidth(10);

	//void setHeight(int height) �Լ� ȣ��
	tri.setHeight(5);

	//12. ��� ������ ����� �����Ͱ��� �����ͼ� ����ϴ� �Լ��� ���� ȣ��
	//tri.getWidth(); //�Լ� ȣ�⵵ �ϰ� ������� ������ �ִ�.
	//tri.getWidth() �Լ� ȣ���ؼ� ����� Ȯ��
	cout << "tri.getWidth() �Լ� ȣ��� �������� width ������ = " << tri.getWidth() << endl;
	cout << "tri.getHeight() �Լ� ȣ��� �������� height ������ = " << tri.getHeight() << endl;


	cout << "------------------------------------" << endl;
	tri.show();
	tri.area_func();

	/*
	//�ι�° ��ü ����
	//Triangle(int width, int height) : width(width), height(height) �Ϲݻ����ڰ� �����Ǿ ��������� �����Ͱ��� �ʱ�ȭ���Ѽ� ���ȴ�.
	Triangle tri1(10, 5);

	tri1.show();
	tri1.area_func();

	//10,5������ �ʱ�ȭ �Ǿ��ִ� ��� ������ ���ο� ���� �����ؼ� ����ؼ� ����ϱ� 
	tri1.width = 2;
	tri1.height = 1;

	tri1.show();
	tri1.area_func();

	cout << "------------------------------------" << endl;
	*/

	return 0;
}