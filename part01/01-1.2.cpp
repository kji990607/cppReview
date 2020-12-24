#include <iostream>

int main (void) {
	char name[100], tel[100];
	
	std::cout << "이름 입력: ";
	std::cin >> name;
	
	std::cout << "전화번호 입력: ";
	std::cin >> tel;
	
	std::cout << "이름은 " << name << ", 전화번호는 " << tel;
	
	return 0; 
}
