#include <iostream>
#include <climits>

using namespace std;

int main() {
	/*
	������ ��Ģ
	1. ���ڽ��� X
	2. C++ Ű���� ��� X
	3. white space�� ��� X
	*/
	int a;
	a = 7;
	
	int b = 3;

	cout << "a = " << a << ", b = " << b 
		<< endl;
	cout << "���� �ּҰ� Ȯ�� & a = " << &a << " , &b = " << &b
		<< endl;
	cout << "--------------------------------------------"
		<< endl;

	/*
	������ : �Ҽ��ΰ� ���� ��
	���� ����, 0, ���� ����

	short, int, long, long long
	*/
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int�� " << sizeof n_int << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_int << " �̴�." << endl;

	cout << "shor�� " << sizeof n_short << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_short << " �̴�" << endl;

	cout << "long�� " << sizeof n_long << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_long << " �̴�" << endl;

	cout << "long long�� " << sizeof n_llong << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_llong << " �̴�" << endl;

	unsigned int c;// 0 ~ 65535
	unsigned short d;
	unsigned long e;
	unsigned long long f;

	d = -1;

	cout << "��� ���� unsigned! : unsigned short -1? : " << d << endl;

	// �Ǽ��� : �Ҽ��ΰ� �ִ� ��
	float g = 3.14;
	int h = 3.14;
	cout << "float g 3.14 : " << g << " , int h 3.14 :" << h << endl;

	cout << "--------------------------------------------"
		<< endl;

	int i = 77;
	char j = i;
	char k = 'k';
	/*
	 ���ڿ��� null ���� '\0' �� ������ ���ڿ��� ������ �ȴ�.
	 "" >> ��������� null���ڰ� ����
	 */
	cout << j << " ,  " << k << endl;

	cout << "--------------------------------------------"
		<< endl;

	/*
	* bool : 0 Ȥ�� 1
	*  0, �̿��� ��� ���� 1�� ����
	*/

	bool l, n, m;
	i = 0;
	n = 1;
	m = 10;

	cout << "i : " << i << ", n : " << n << " , m : " << m << endl;

	return 0;
}
