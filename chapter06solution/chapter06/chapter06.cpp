#include <iostream>
#include <string> //���ڿ��� ó���ϴ� �Լ��� ��� �ִ� ���̺귯��
#include <cstdlib> //������ �����Ű�� �Լ��� ����ִ� ���̺귯�� 
#include <ctime> //�ð��� �����ϴ� �Լ��� ����ִ� ���̺귯��

using namespace std;

int main(void) {
	//���ڿ�(string)

	/*
	//c-string ���
	char name[20] = "�輺��";

	//c++ ���
	//              [0][1]
	//string s = "when in Rome, do as the Romans";
	//string s = "�츮���� ���ѹα�"; //�ѱ��� �����ϳ��� 2����Ʈ ũ���̴�.(�޸� 2���� ���� �ϳ��� �̷��.)
	
	//��ҿ� ����
	cout << "s = " << s << endl;
	cout << "s[0] = " << s[0] << endl;
	cout << "------------------------" << endl;

	//���ڿ� ���� �˾ƺ���
	cout << "���ڿ��� ���� (s.length()) = " << s.length() << endl;

	//���ڿ� ���
	//for���� �̿��� ��� �ϳ� �ϳ� ������ ���
	for (int i = 0; i< s.length(); i++) {
		cout << "s[" << i << "] = ";
		cout << s[i] << endl;
	}

	//for ~ each�� (�迭 ���� for��)
	//����) for (�迭���� ������ ��Ұ��� �����ϴ� ������ : �迭��) {�ݺ�ó�� ����}

	for (char x : s) { //������ char ������ ó��
		cout << "x = " << x << endl;
	}
	*/

	/*
	//�ѱ��� �����ϳ��� 2����Ʈ ũ���̴�.(�޸� 2���� ���� �ϳ��� �̷��.)
	string name = "ö��";
	string name1 = "����";
	string name2 = "�浿";

	//string s = "�츮���� ���ѹα�"
	string s[] = { 
		{"��"}, //1��
		{"��"}, //2��
		{"��"}, //3��
		{"��"}, //4��
		{"��"}, //5��
		{"��"}, //6��
		{"��"}, //7��
		{"��"}  //8��
	};

	//                     [0]��   [1]��  [2]��
	string list[] = { "ö��","����","�浿" };

	//��ҿ� ����
	cout << "list = " << list << endl;
	cout << "list[0] = " << list[0] << endl;
	cout << "------------------------" << endl;

	//for ~ each�� (�迭 ���� for��)
	//����) for (�迭���� ������ ��Ұ��� �����ϴ� ������ : �迭��) {�ݺ�ó�� ����}
	for (string x1 : list) { //�ѱ��� string������ ó��
		cout << x1 << "�� �ȳ�" << endl;
	}
	cout << "---------------------------" << endl;
	*/

	/*
	//���� �߻�(������ ��)
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << "-------------------" << endl;

	//����ð� ǥ��
	cout << "����ð�ǥ��" << time(NULL) << endl;
	cout << "-------------------" << endl;

	//seed���� �����ؼ� ���� �߻��ÿ� ���ڸ� �����ų�� �ִ� ������ ������ִ� �Լ�
	//����)srand(����ð��� seed������ ����)
	srand(time(NULL));

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << "-------------------" << endl;

	for (int i = 1; i <= 5; i++) {

		//                 1 % 5 = 1
		//                 2 % 5 = 2
		//                 3 % 5 = 3
		//                 4 % 5 = 4
		//                 5 % 5 = 0
		//                 6 % 5 = 1
		//                 7 % 5 = 2
		//                 8 % 5 = 3
		//               12 % 5 = 2
		cout << rand() % 45 +1 << endl; //0~4������ ���� ������ �����Ѵ�.
	}
	*/

	//��� ����  :��ǻ�Ϳ� �����س��� ���ڿ� ���߱� ����

	char ch; //Ű���忡�� ����ڰ� �Է��� ���ڸ� �����ϴ� ����
	string solution; //��ǻ�Ϳ��� �����س��� ���ڿ� �߿��� ���õ� ���ڿ��� ����Ǵ� ����

	//��ǻ�Ϳ� �����س��� ���ڿ� ���� �׸�
	string list[] = {
		"the",						//list[0] 0��
		"c++",						//list[1] 1��
		"programming",			//list[2] 2��
		"language"					//list[3] 3��
	};

	//list[]�迭�� ��ȣ�߿��� ������ ��ȣ�� ��ǻ�Ͱ� �����ϱ� ���� ���� �߻�
	srand(time(NULL));
	int n = rand() % 4; //0~3���� ���� ������ �� �߻�
	cout << "��ǻ�Ͱ� �߻���Ų ���� : " << n << endl;
	cout << "--------------------" << endl;

	//������ ����� ���ڿ��� �����ؼ� solution ������ ����

	solution = list[n];
	//cout << "solution = " << solution << endl;

	//���õ� ������ ���ڿ��� ���̸� ǥ���Ѵ�.[**************ǥ��]
	string guess(solution.length(), '*');
	cout << "guess = " << guess << endl;

	while (true) {

		cout << "guess = " << guess << endl;

		cout << "�����ϴ� ���� �ϳ��� �Է��ϼ��� >>> " << endl;

		cin >> ch; //Ű���忡�� ����ڰ�  ***ǥ�õ� ���ڿ��� ����� ���ؼ� �Է��ϴ� ���� �ϳ��� ch ������ ����

		for (int i = 0; i < solution.length(); i++) {

			if (ch == solution[i]) {
				guess[i] = ch;
			}
		}

		if (solution == guess) {
			cout << solution << endl;
			cout << "�����Ͽ����ϴ�!";
			break;
		}
	}
	
	return 0;
}