#include <iostream>
using namespace std;
//동적 할당 : heap영역에 메모리 공간을 할당받아서 사용하고 사용이 끝나면 반드시 반납해야 하는 기능이다.
//동적 할당 : new / delete 키워드 사용

int main(void) {

	//1. 동적할당 기본 선언과 제거 방법
	//int* p1; //주소를 담을 수 있는 포인터(변수)이다.
	//p1 = new int; //Heap 영역에 int형(4byte) 크기로 메모리 공간을 할당하고 시작 주소를 포인터 변수에 넣는다.

	//형식) 자료형 *(포인터)변수명 = new 자료형;
	int* p1 = new int;
	cout << "p1 포인터 변수내의 주소값을 찾아갔더니 존재하는 값 출력 = " << *p1 << endl;
	cout << "-----------------------------------" << endl;

	//새로운 값 대입
	*p1 = 50;
	cout << "p1 포인터 변수내의 주소값을 찾아갔더니 존재하는 값 출력 = " << *p1 << endl;
	cout << "-----------------------------------" << endl;

	*p1 = 10;
	cout << "p1 포인터 변수내의 주소값을 찾아갔더니 존재하는 값 출력 = " << *p1 << endl;
	cout << "-----------------------------------" << endl;

	//Heap 영역에 메모리 공간 사용이 끝나면 반드시 반납해야 한다.
	//형식) delete (포인터)변수명
	delete p1;

	//2. 동적할당시에 Heap영역의 메모리 공간을 미리 초기화해놓고 사용하는 방법
	int* p2 = new int(10);
	cout << "p2 포인터 변수내의 주소값을 찾아갔더니 존재하는 값 출력 = " << *p2 << endl;
	cout << "-----------------------------------" << endl;

	*p2 = 1500;
	cout << "p2 포인터 변수내의 주소값을 찾아갔더니 존재하는 값 출력 = " << *p2 << endl;
	cout << "-----------------------------------" << endl;

	//Heap 영역에 메모리 공간 사용이 끝나면 반드시 반납해야 한다.
	//형식) delete (포인터)변수명
	delete p2;

	//3. 여러개의 동적메모리 공간 할당 받기
	//                                [0] [1] [2]
	int* parr = new int[3] {10, 20, 30};
	cout << "parr[0]" << parr[0] << endl;
	cout << "parr[1]" << parr[1] << endl;
	cout << "parr[2]" << parr[2] << endl;
	cout << "-----------------------------------" << endl;

	//Heap 영역에 메모리 공간 사용이 끝나면 반드시 반납해야 한다.
	//형식) delete (포인터)변수명
	delete [] parr;

	return 0;
}