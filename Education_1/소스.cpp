#include <iostream> //전처리 지시자

/*
*전처리 지시자*
c++에서 함수(ex. cout)를 사용하고자 하려면
반드시 그 함수의 원형을 미리 정의하여야 함.
*/
using namespace std;
// using namesapce std가 없으면 각 함수앞에 'std::'를 붙여줘야함
// 각 함수는 헤더파일에 저장되어있기 때문에 각 헤더에 따른 네임스페이스를 사용해야함 (ex. iostream : std)
// ';' 종결자, tab, space가 있어도 ;이 종결자의 역활을 해줌
int main() {
	//c++ 코드에는 반드시 main의 이름을 가지고 있는 함수가 존재하여야 함.
	cout << "Hello, World!" << endl;
	// cout. cout 뒤의 문장을 콘솔창에 출력.
	// endl. endl은 줄바꿈의 역활을 함.
	// <<. 꺾쇠는 데이터의 흐름을 의미.
	return 0;
}
// //, /**/는 주석임 //뒤의 단일행을 주석처리함, /**/는 .*와 */ 사이의 문장을 주석처리함 복수의 행도 주석처리가 가능.