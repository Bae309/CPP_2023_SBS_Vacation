#include <iostream>

//네임스페이스(namespace)
//공간을 만들어서 이름을 붙여놓았다.
//->특정 영역을 만들어서 이름을 붙여주기 위한 문법적 요소이다.
//전역변수나 함수명들의 중복을 막아서 충돌을 막기 위해서이다.
//형식)namespace 공간이름 { 함수, 변수 } 

namespace AAA {
	
	int num = 10;

	namespace BBB {

		int num = 20;

		namespace CCC {

			int num = 30;
		}
	}
 }

int num = 40; //전역변수

//namespace 별칭 만들기 : 원래의 namespace명을 찾아가는 경로명을 줄이기 위해서 사용한다.
//형식) namespace 별칭(새로운 namespace명) = 원래namespace명
namespace A = AAA;
namespace AB = AAA::BBB;
namespace ABC = AAA::BBB::CCC;


int main(void) {

	//스코프 연산자(::) -> namespace영역에 접근할때 사용(유효영역)
	std::cout << "AAA::num = " << AAA::num << std::endl;
	std::cout << "AAA::BBB::num = " << AAA::BBB::num << std::endl;
	std::cout << "AAA::BBB::CCC::num = " << AAA::BBB::CCC::num << std::endl;
	std::cout << "-------------------------------" << std::endl;

	//namespace별칭을 지정해서 사용
	std::cout << "A::num = " << A::num << std::endl;
	std::cout << "AB::num = " << AB::num << std::endl;
	std::cout << "ABC::num = " << ABC::num << std::endl;
	std::cout << "-------------------------------" << std::endl;

	//전역변수 사용
	std::cout << "전역변수::num = " << ::num << std::endl;
	std::cout << "-------------------------------" << std::endl;

	//
	int sum1 = A::num + AB::num + ABC::num + ::num;
	std::cout << "num 변수를 모두 더한 값 = " << sum1 << std::endl;
	std::cout << "-------------------------------" << std::endl;


	return 0;
}