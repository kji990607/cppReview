#include <iostream>

int main (void) {
	char name[100], tel[100];
	
	std::cout << "�̸� �Է�: ";
	std::cin >> name;
	
	std::cout << "��ȭ��ȣ �Է�: ";
	std::cin >> tel;
	
	std::cout << "�̸��� " << name << ", ��ȭ��ȣ�� " << tel;
	
	return 0; 
}
