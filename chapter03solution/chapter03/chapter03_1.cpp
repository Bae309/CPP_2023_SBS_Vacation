#include <iostream>
using namespace std;

//�Լ� �����ε�(overloading) : �Լ� �ߺ�
//1. ������ �̸��� ���� �Լ��� ������ ������ ���� ����� �� �ִ�.
//*** 2. �Լ� �̸��� ���� �Ű������� �ڷ����̳� ������ �޶�� �Ѵ�. 

//           100
void print(int i) {
	cout << "int i �Ű������� ��� = " << i << endl;
	return;
}

void print(char i) {
	cout << "char i �Ű������� ��� = " << i << endl;
	return;
}

void print(double i) {
	cout << "double i �Ű������� ��� = " << i << endl;
	return;
}

//�簢���� �ѷ� : ���� * ���� �� ���ϴ� �Լ� �ۼ��ϱ�
//������ �Ű����� 2���� �Է¹޾� ���� * ���� �� ����� ������� ��ȯ���ִ� �Լ� �ۼ��ϱ�
//�Լ��� : square

//             10         5
int square(int line1, int line2) {
	return line1 * line2; // ���� * ���� -> ȣ���� ������ ������� ��ȯ�ؾ� �Ѵ�.
}
int main(void) {
	//�Լ� ȣ��
	//void print(int i) �Լ� ȣ��
	print(100);

	//void print(char i) �Լ� ȣ��
	print('*');

	//void print(double i) �Լ� ȣ��
	print(3.14);

	//void square(int line1, int line2) �Լ� ȣ��
	int square_tot = square(10, 5);
	cout << "���� * ���� =  " << square_tot << endl;

	return 0;
}