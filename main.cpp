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

	// ���⼭ &�� reference type�� ǥ�ô�.
	// ����� �ּ� ǥ�Ⱑ ����.
	

	// �̸� �ʱ�ȭ�� ������ �ؾ��Ѵ�.
	// int& ref;
	// ref = &a; ���� ���´� �ȵȴ�.
	

	// reference type�� �ٸ� ������ ����Ű�� ���� �Ұ���������.
	// ex) ref = &b;
}
