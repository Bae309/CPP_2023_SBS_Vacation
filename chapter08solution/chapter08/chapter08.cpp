#include <iostream>

using namespace std;

//����(��)�� ���̸� ���ϴ� Ŭ���� �ۼ�
//Ŭ����(class) : ���赵�̴�. ������ �Ҽ���, ������ ���� ���� ���� ����.

//���� ������ : public(���ٰ���:��밡��), protected, private
class Circle {

public :
	//                               5
	double area_func(double radius){
		//������ = ������ * ������ * 3.14
		return radius * radius * 3.14; //ȣ���� ������ �����(��ȯ��)�� �����ش�.
	}

};
int main(void) {

	//��ü ���� : Ŭ������ ������� �ִ� ������ �Լ��� ������ �޸� ������ ��ġ���Ѽ� ����� �� �ֵ��� �Ѵ�.
	//����) �ڷ��� ������ =10;
	int a = 10;

	//��ü ���� ����) Ŭ������ ������;
	Circle pizza;

	//double area_func(double radius) �Լ�(�޼���) ȣ��
	pizza.area_func(5); //ȣ�⵵ �ϰ� ������� ������ �ִ�.
	//** ������(��ü��)�� �����ϴ� ����) ������(��ü��). �Լ���(�Ű�������);
	cout << "pizza.area_func(5) ������� ��� = " << pizza.area_func(5) << endl;
	cout << "-----------------------------------------------" << endl;

	Circle pizza1;
	pizza1.area_func(10); //ȣ�⵵ �а� ������� ������ �ִ�.
	cout << "pizza.area1_func(10) ������� ��� = " << pizza1.area_func(10) << endl;
	cout << "-----------------------------------------------" << endl;

	return 0;
}