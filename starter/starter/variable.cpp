#include <iostream>
#include <climits>

using namespace std;

int main() {
	/*
	변수명 규칙
	1. 숫자시작 X
	2. C++ 키워드 사용 X
	3. white space를 사용 X
	*/
	int a;
	a = 7;
	
	int b = 3;

	cout << "a = " << a << ", b = " << b 
		<< endl;
	cout << "변수 주소값 확인 & a = " << &a << " , &b = " << &b
		<< endl;
	cout << "--------------------------------------------"
		<< endl;

	/*
	정수형 : 소수부가 없는 수
	음의 정수, 0, 양의 정수

	short, int, long, long long
	*/
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;

	cout << "shor은 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << " 이다" << endl;

	cout << "long은 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 이다" << endl;

	cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 이다" << endl;

	unsigned int c;// 0 ~ 65535
	unsigned short d;
	unsigned long e;
	unsigned long long f;

	d = -1;

	cout << "양수 지정 unsigned! : unsigned short -1? : " << d << endl;

	// 실수형 : 소수부가 있는 수
	float g = 3.14;
	int h = 3.14;
	cout << "float g 3.14 : " << g << " , int h 3.14 :" << h << endl;

	cout << "--------------------------------------------"
		<< endl;

	int i = 77;
	char j = i;
	char k = 'k';
	/*
	 문자열은 null 문자 '\0' 을 만나야 문자열이 끝남을 안다.
	 "" >> 명시적으로 null문자가 포함
	 */
	cout << j << " ,  " << k << endl;

	cout << "--------------------------------------------"
		<< endl;

	/*
	* bool : 0 혹은 1
	*  0, 이외의 모든 값은 1로 저장
	*/

	bool l, n, m;
	i = 0;
	n = 1;
	m = 10;

	cout << "i : " << i << ", n : " << n << " , m : " << m << endl;

	return 0;
}
