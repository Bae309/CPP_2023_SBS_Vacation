#include <iostream>

using namespace std;

//���(inheritance)�� ������
//���(inheritance) -> �ڵ��� ���뼺
//->���ο� Ŭ������ ���鶧, ������ ������� Ŭ������ �ɹ����� �״�� �����ٰ� ����� �� �ֵ��� �ϴ� ����̴�.


//���������� : public(���ٰ���), protected, private(���ٺҰ���)
class Shape {

	int x, y; //��� ����
	
public:
	//�⺻ ������ ����
	Shape() : x(0), y(0) {
		cout << "Shape() : x(0), y(0) �⺻������ ȣ��" << this << endl;
	}

	//�Ϲ� ������ ����

	//           _x           _y    :  _x(10)  _y(10)
	Shape(int xloc, int yloc) : x(xloc), y(yloc){
		cout << "Shape(int xloc, int yloc) : x(xloc), y(yloc) �Ϲݻ����� ȣ��" << this << endl;
	}

	//�Ҹ���
	~Shape() {
		cout << "~Shape �Ҹ��� ȣ��" << this << endl;
	}

	//��� �������� �����Ͱ��� ����ϴ� ����� �����Լ� ����
	void show() {
		cout << "x = " << ", y = " << y << endl;
	}

};

//���ο� Ŭ������ ���鶧 ������ Ŭ������ ��ӹ޾Ƽ� ����Ѵ�.
//����) class ���ο� Ŭ������ : ���������� ������ִ� Ŭ������ {    ���� ������ ����� ����(����, �Լ�)     };
//�ڽ�(����, �Ļ�) Ŭ������ : public �θ�(����) Ŭ������ {         };
class Rectangle : public Shape {

	int width, height;

public:
	//�Ϲ� ������ �Լ� ����
	//Shape(_x, _y) : x,y ��� ������ �θ� Ŭ����(Shape)�� �ִ�.
	//Shape(int xloc, int yloc) : x(xloc), y(yloc) �θ� Ŭ������ �Ϲ� ������ ������ ȣ���ؼ� �з���
	//x,y ��� ������ �����Ͱ��� �ʱ�ȭ�ؼ� ��ü ����
	// **Shape(int xloc, int yloc) : x(xloc), y(yloc) : xloc <- _x, yloc <- _y�Ű��������� �־��ش�.

	//Rectangle r (10,   10,      100,           100);                  10, 10
	Rectangle(int _x, int _y, int _width, int _height) : Shape(_x, _y) {
		//x = _x;
		//y = _y;
		width = _width; //Rectangle ��� ����
		height = _height; //Rectangle ��� ����
		cout << "Rectangle(int _x, int _y, int _width, int _height) : Shape(_x, _y) �Ϲ� ������ ȣ��" << this << endl;
	}
	
	//�Ҹ���
	~Rectangle() {
		cout << "~Rectangle �Ҹ��� ȣ��" << this << endl;
	}

	//��� �������� ����� �����Ͱ��� ����ϴ� ����� ���� �Լ� �ۼ�
	void show1() {
		this->show();
		//cout << "x = " << x << ", y = " << y << endl;
		cout << "width = " << width << ", height = " << height << endl;
	}

};

int main(void) {
	//��ü ����
	//Shape() : x(0), y(0) �⺻ �����ڰ� ȣ��Ǿ ��� ������ �����Ͱ��� �ʱ�ȭ�ؼ� ��ü�� �����Ѵ�.
	Shape s;
	s.show();
	cout << "-----------------------------" << endl;

	//Shape(int xloc, int yloc) : x(xloc), y(yloc) �Ϲݻ����ڰ� ȣ��Ǿ ��� ������ �����Ͱ��� �ʰ�ȭ�ؼ� ��ü�� �����Ѵ�.
	Shape s1(10, 10);
	s1.show();
	cout << "-----------------------------" << endl;

	//Rectangle(int _x, int _y, int _width, int _height) : Shape(_x, _y) �Ϲݻ����� ȣ���ؼ� ��� ������ �����Ͱ��� �ʰ�ȭ�켭 ��ü�� 
	Rectangle r(10, 10, 100, 100);
	r.show1();

	return 0;
}