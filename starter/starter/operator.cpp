#include <iostream>
//#define PIE  3.141592; C ��Ÿ��

using namespace std;

int main() {
	/*
		���� ���̸� ���ϴ� ���α׷� : 
		������ * ������ * ����
	*/

	const float PIE = 3.1415926535;

	int r = 3;
	float s = r * r * PIE;

	cout << s << endl;

	cout << "------------------------------" << endl;

	/*
	�������� ��ȯ
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/
	int intager = PIE;

	cout << intager << endl;

	// ���������� �������� ��ȯ
	/* C++
	* static_cast<typeName>
	*/

	char ch = 'M';
	cout << (int)ch << "  ,  " << int(ch) << "  ,  " << static_cast<int>(ch)  << endl;

	/*
		+ - * / %
		% : ������ ���� �ε� �Ҽ��� (�Ǽ�) ����� �� ����.
	*/

	/*
	auto
	*/
	auto n = 100; // int
	auto x = 1.5; // x�� float

	return 0;
}