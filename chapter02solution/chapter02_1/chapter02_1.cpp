#include <iostream>
//using namespace std; //std 네이스페이스내의 모든 함수나 변수를 사용할수 있도록 오픈시켜 놓았다.(네임스페이스명 적지 않아도 됨)
using std::cout; //std 네이스페이스내의 cout 변수를 사용할수 있도록 오픈시켜 놓았다.(네임스페이스명 적지 않아도 됨)
using std::endl;
using std::cin;

//함수형식) 반환값자료형 함수명(매개변수 or 인수 or 인자) {   처리과정 return 반환값;   }
namespace kakao {
	
	void func(void) {
		std::cout << "카카오에서 만들어온 이모티콘 등록 프로그램입니다.!!!" << std::endl;
	}

}

namespace kakao {
	
	void chatfunc() {
		std::cout << "카카오에서 만들어온 채팅 등록 프로그램입니다." << std::endl;
	}
}

namespace line {
	
	void func() {
		std::cout << "라인에서 만들어온 이모티콘 등록 프로그램입니다.!!!" << std::endl;
	}
}

//1. using지시자 : 지정 namespace명 내에 함수나 변수를 모두 가져와서 사용할수 있게 한다.
//-> 함수 호출시에 앞에 namespace명을 생략할 수 있다.(namespace를 오픈시킨다.)
//형식) using namespace 네임스페이스명;
//kakao 네임스페이스 내의 모든 변수나 함수들은 호출해서 사용할 경우 앞에 네임스페이스명을 적지 않고 사용가능하다.
//using namespace kakao;

//2. using 선언자 : 지정 namespace명 내에 하나의 함수나 변수만 가져와서 사용할 수 있게 한다. 
//-> 함수 호출시에 앞에 namespace명을 생략할 수 있다.(하나의 변수나 하나의 함수를 오픈시킨다.)
//형식) using 네임스페이스명::함수명 or  변수명;
using kakao::chatfunc;

int main(void) {

	/*
	//namespace내의 함수들을 호출해서 사용
	//함수 호출)함수명(매개변수값)
	// void func() 함수 호출
	kakao::func();
	kakao::chatfunc();
	line::func();
	std::cout << "-------------------------" << std::endl;

	//1. using지시자 : 지정 namespace명 내에 함수나 변수를 모두 가져와서 사용할수 있게 한다.
	//형식) using namespace 네임스페이스명;
	//using namespace kakao

	func(); //using명령으로 open 시켜놓은  kakao의 func() 함수 호출
	chatfunc();
	line::func(); //using명령으로 open 시켜놓지 않은 line의 func() 함수 호출
	std::cout << "-------------------------" << std::endl;

	*/

	/*
	//2. using 선언자 : 지정 namespace명 내에 하나의 함수나 변수만 가져와서 사용할 수 있게 한다. 
	// //형식) using 네임스페이스명::함수명 or  변수명;
	//using kakao::chatfunc;
	kakao::func();
	chatfunc();
	line::func();
	*/

	std::cout << "std::namespace 지시자로 오픈시켜놓았습니다" << std::endl;
	cout << "std::namespace 지시자로 오픈시켜놓았습니다" << endl;


	return 0;
}