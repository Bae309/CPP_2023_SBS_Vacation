#include <iostream>

using namespace std;

class Calculator {

public : 
	double add(double a, double b); //�Լ� ���� ����
	double sub(double a, double b);
	double mul(double a, double b);
	double ddiv(double a, double b);
};

//�Լ� ���Ǵ� Ŭ���� �ٱ��� �ص� �������.
//�Լ��� �տ� Ŭ���� �̸� :: ������ �����ؾ� �Ѵ�.
double Calculator::add(double a, double b) { //�Լ� ���� 
	return a + b;
}

double Calculator::sub(double a, double b) { //�Լ� ���� 
	return a - b;
}

double Calculator::mul(double a, double b) { //�Լ� ���� 
	return a * b;
}

double Calculator::ddiv(double a, double b) { //�Լ� ���� 
	return a / b;
}

int main(void) {

	int menu; //1: ���ϱ�, 2: ����, 3. ���ϱ�, 4.������ �޴��� �����ϵ��� �Է¹޴� ����
	double a = 0, b = 0; //����� �Ű��������� �����ϴ� a,b����

	//��ü ���� : �޸𸮰����� ������ �޼��带 ��ġ�Ѵ�.
	Calculator cal;

	//Ű����� ���� a,b������ �Ű������� �Է¹޾Ƽ� �����ؼ� ó���ϱ�

	while (1) {

		cout << "1.����\n2.����\n3.����\n4.������\n";
		cout << "���� (�޴� : 1,2,3,4�� ���� ����) >>";
		cin >> menu;
		cout << "--------------------------------" << endl;

		switch (menu) {
		case 1: //���ϱ� ���� �����ϴ� ����
			cout << "2���� ���ڸ� �Է��ϼ��� >>> ";
			cin >> a >> b;
			cout << a << "+" << b << "=" << cal.add(a, b) << endl;
			break;

		case 2: //���� ���� �����ϴ� ����
			cout << "2���� ���ڸ� �Է��ϼ��� >>> ";
			cin >> a >> b;
			cout << a << "-" << b << "=" << cal.sub(a, b) << endl;
			break;

		case 3: //���ϱ� ���� �����ϴ� ����
			cout << "2���� ���ڸ� �Է��ϼ��� >>> ";
			cin >> a >> b;
			cout << a << "*" << b << "=" << cal.mul(a, b) << endl;
			break;

		case 4: //������ ���� �����ϴ� ����
			cout << "2���� ���ڸ� �Է��ϼ��� >>> ";
			cin >> a >> b;
			cout << a << "/" << b << "=" << cal.ddiv(a, b) << endl;
			break;
		}

		//while(1) :���� �ݺ� ����
		if (menu <= 0 || menu >= 5) {
			cout << "���� �޴� �Դϴ�. ���α׷��� �����մϴ�.";
			break;
		}
		cout << "============================" << endl;

	}
		




	return 0;
}

