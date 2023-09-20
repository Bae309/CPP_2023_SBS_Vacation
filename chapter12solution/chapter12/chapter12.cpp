#include <iostream>
using namespace std;
//���� �Ҵ� : heap������ �޸� ������ �Ҵ�޾Ƽ� ����ϰ� ����� ������ �ݵ�� �ݳ��ؾ� �ϴ� ����̴�.
//���� �Ҵ� : new / delete Ű���� ���

int main(void) {

	//1. �����Ҵ� �⺻ ����� ���� ���
	//int* p1; //�ּҸ� ���� �� �ִ� ������(����)�̴�.
	//p1 = new int; //Heap ������ int��(4byte) ũ��� �޸� ������ �Ҵ��ϰ� ���� �ּҸ� ������ ������ �ִ´�.

	//����) �ڷ��� *(������)������ = new �ڷ���;
	int* p1 = new int;
	cout << "p1 ������ �������� �ּҰ��� ã�ư����� �����ϴ� �� ��� = " << *p1 << endl;
	cout << "-----------------------------------" << endl;

	//���ο� �� ����
	*p1 = 50;
	cout << "p1 ������ �������� �ּҰ��� ã�ư����� �����ϴ� �� ��� = " << *p1 << endl;
	cout << "-----------------------------------" << endl;

	*p1 = 10;
	cout << "p1 ������ �������� �ּҰ��� ã�ư����� �����ϴ� �� ��� = " << *p1 << endl;
	cout << "-----------------------------------" << endl;

	//Heap ������ �޸� ���� ����� ������ �ݵ�� �ݳ��ؾ� �Ѵ�.
	//����) delete (������)������
	delete p1;

	//2. �����Ҵ�ÿ� Heap������ �޸� ������ �̸� �ʱ�ȭ�س��� ����ϴ� ���
	int* p2 = new int(10);
	cout << "p2 ������ �������� �ּҰ��� ã�ư����� �����ϴ� �� ��� = " << *p2 << endl;
	cout << "-----------------------------------" << endl;

	*p2 = 1500;
	cout << "p2 ������ �������� �ּҰ��� ã�ư����� �����ϴ� �� ��� = " << *p2 << endl;
	cout << "-----------------------------------" << endl;

	//Heap ������ �޸� ���� ����� ������ �ݵ�� �ݳ��ؾ� �Ѵ�.
	//����) delete (������)������
	delete p2;

	//3. �������� �����޸� ���� �Ҵ� �ޱ�
	//                                [0] [1] [2]
	int* parr = new int[3] {10, 20, 30};
	cout << "parr[0]" << parr[0] << endl;
	cout << "parr[1]" << parr[1] << endl;
	cout << "parr[2]" << parr[2] << endl;
	cout << "-----------------------------------" << endl;

	//Heap ������ �޸� ���� ����� ������ �ݵ�� �ݳ��ؾ� �Ѵ�.
	//����) delete (������)������
	delete [] parr;

	return 0;
}