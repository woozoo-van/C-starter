#include <iostream>
#include <cstring>

using namespace std;


int main() {
	/*
	C++는 복합데이터형을 제공한다.
	>> 사용자 정의대로 새로운 데이터형을 만들 수 있다.
	복합데이터형 : 기본 정수형과 부동소수점형의 조합
		
		배열(array) : 같은 데이터형의 집합
		typeName arrayName[arraySize];
		- 배열 원소에 대입할 값들을 콤마로 구분하여 중괄호로 묶어 선언
		- 초기화를 선언 이후 나중에 할 수 없다.
		- 배열을 다른 배열에 통째로 대입할 수 없다.
		- 초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공할 수 있다.
		- 배열을 부분적으로 초기화하면, 나머지 원소들은 모두 0으로 설정한다.
		  즉, 명시적으로 첫 번째 원소만 0으로 초기화하면, 나머지 원소들은 모두 0으로 초기화한다.
		- 배열을 초기화할때 대괄호 속(크기)을 비워두면 컴파일러가 초기화 값의 개수를 헤아려 배열 원소 개수를 저장한다.
	*/
	short month[12] = { 1, 2, 3 };

	cout << month[3] << endl;
	
//		문자열 : 문자의 열

	char a[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

	cout << a << endl;

	char b[] = "Hello";

	cout << b << endl;

	cout << "-------------------------------------------" << endl;

	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programing";

	cout << "안녕하세요! 저는 " << name2;
	cout << "입니다. 성함이 어떻게 되시나요? \n";
	//cin >> name1; white space 사용 불가
	cin.getline(name1, Size);
	cout << name1 << "씨, 당신의 이름은";
	cout << strlen(name1) << "자 입니다. \n";
	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다. \n";
	cout << "이름이 " << name1[0] << "자로 시작하는 군요. \n";
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다.";
	cout << name2 << endl;

	cout << "-------------------------------------------" << endl;
	/*
	String 
		C스타일로 string 객체를 초기화할 수 있다.
		cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
		cout을 사용하여 string 객체를 디스플레이할 수 있다.
		배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.

		배열은 다른 배열에 통쨰로 대입할 수 없다.
		>> string 가능
	*/
	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";

	//char1 = char2;
	str1 = str2;
	
	cout << str1 << str1[0] << endl;

	return 0;
}