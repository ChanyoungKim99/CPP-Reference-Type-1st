#include <iostream>

int main()
{
	int a{ 1 };

	// c : pointer type
	int* p{ &a };
	*p = 3;


	// c++ : reference type
	int& ref{ a };
	ref = 3;

	// 여기서 &는 reference type의 표시다.
	// 여기는 주소 표기가 없다.
	

	// 미리 초기화를 무조건 해야한다.
	// int& ref;
	// ref = &a; 같은 형태는 안된다.
	

	// reference type은 다른 변수를 가리키는 것이 불가능해진다.
	// ex) ref = &b;
}
