#include <iostream>

//�Է°� ���
//1.���
//printf("�ڱ�Ұ�\n")
//��� ����)std::cout << ��³��� << std::endl
// << ��� ������ : ��� �׸���� �����ؼ� �ÿ��Ѵ�.

int main(void) {

	/*
	//�ڱ� �Ұ��� ����մϴ�.
	//�̸�, ���� , ������, Ű�� ����Ѵ�.

	//�̸��� �輺���Դϴ�.
	//���̴� 20���Դϴ�.
	//�������� B���Դϴ�.
	//Ű�� 183.1cm�Դϴ�.

	//��� ����)std::cout << ��³��� << std::endl
	std::cout << "�̸��� �輺���Դϴ�.\n";
	std::cout << "���̴� 23���Դϴ�." << std::endl;
	std::cout << "�������� B���Դϴ�." << std::endl;
	std::cout << "Ű�� 183.1cm�Դϴ�." << std::endl;
	std::cout << "----------------------" << std::endl;

	//������ �̿��� ���
	char name[10] = "�輺��"; //���ڿ��� ū����ǥ �ٿ��� ������ �־��ֱ�
	int age = 23;
	char blood = 'B'; //���� �ϳ��� ���� ����ǥ �־ �ٿ��ֱ�
	double height = 183.1;

	//printf("%s\n", name);
	std::cout << "�̸� : " << name << std::endl;
	std::cout << "���� : " << age << std::endl;
	std::cout << "������ : " << blood << std::endl;
	std::cout << "Ű : " << height << std::endl;
	std::cout << "----------------------" << std::endl;

	//������ �̿��� �Է�(Ű����� ���� �Է¹��� �����͸� ������ �����Ű��)
	//scanf("%d", &age)
	//std::cin >> ������ ������;
	// >> �Է¿����� : �Է� �׸���� �����ؼ� ����Ѵ�.

	//������ ���� �غ� -> �޸� ���� Ȯ��
	char name1[10];
	int age1;
	char blood1;
	double height1;

	std::cout << "�̸��� �Է��ϼ��� >>> " << std::endl;
	std::cin >> name1;

	std::cout << "���̸� �Է��ϼ��� >>> " << std::endl;
	std::cin >> age1;

	std::cout << "�������� �Է��ϼ��� >>> " << std::endl;
	std::cin >> blood1;

	std::cout << "Ű�� �Է��ϼ��� >>> " << std::endl;
	std::cin >> height1;
	std::cout << "----------------------" << std::endl;

	std::cout << "�̸� : " << name1 << std::endl;
	std::cout << "���� : " << age1 << std::endl;
	std::cout << "������ : " << blood1 << std::endl;
	std::cout << "Ű : " << height1 << std::endl;
	*/

	/*
	//������ ���� �غ� -> �޸� ���� Ȯ��
	char name2[10];
	int age2;
	char blood2;
	double height2;

	std::cout << "�̸�, ����, ������, Ű�� �Է��ϼ���(�� �׸��� �����̽�, tab, enter�� ����) >>> " << std::endl;

	//printf("%s %d %c %lf", &name2, &age2, &blood2, &height2);
	std::cin >> name2 >> age2 >> blood2 >> height2;
	std::cout << "�̸� : " << name2 << ", ���� : " << age2 << ", ������ : " << blood2 << ", Ű : " << height2 << std::endl;
	//���ϳ�����20����A����175.5
	//���ϳ�����ƽ�20�����̽�A�����̽�175.5
	*/


	//���� ������ �ִ� ���� ĵ���� ������ Ű����� �Է¹޾� ������ �����ϰ�,
	//���� ������ �ִ� ������ �ִ��� �� �� �ִ� ���������� �����ϰ� ���� ���� ���ϱ�

	//���� ������ �ִ� �� ; 10000
	//�������� : 1350
	//�� �� �ִ� �������� : �?
	//�Ž����� : ��??

	//������ ������(/), ������ ������(%)

	int money; //���� ������ �ִ� ��
	int candy_price; //��������
	std::cout << "���� ������ �ִ� ���� �Է��ϼ��� >>> ";
	std::cin >> money;
	std::cout << "������ ������ �Է��ϼ��� >>> ";
	std::cin >> candy_price;

	//���� ������ �ִ� ������ �ִ��� �� �� �ִ� ��������
	int count = money / candy_price;
	std::cout << "���� ������ �ִ� ������ �ִ��� �� �� �ִ� ���������� " << count << "�� �Դϴ�." << std::endl;

	//�����ϰ� ���� ��(�Ž�����)
	int change = money % candy_price;
	std::cout << "�Ž������� " << change << "�� �Դϴ�." << std::endl;



	return 0;
}