#include <iostream>

using namespace std;

int main() {
	// 변수 : 변할 수 없는 수
	// cf) 상수 : 변할 수 없는 수

	/*
	1. 변수의 자료형
	2. 변수의 이름
	3. 변수가 어디에 저장되는가(메모리 영역)?

	* 변수 규칙
	1. 숫자로 시작할 수 없음. ex( int 123a;
	2. c++에서 사용하고 있는 키워드는 사용할 수 없음. ex) int return;
	3. white space는 사용할 수 없음. ex) int ab cd;
	*/

	int a; //선언
	a = 7; //대입

	int b = 3; //초기화

	cout << a << b << endl;

	return 0;
}