#include <iostream>

int main (void) {
	int num;
	int result = 0;
	
	for (int i=1; i<=5; i++) {
		std::cout << i << "��° ���� �Է�: ";
		std::cin >> num;
		
		result += num; 
	}
	
	std::cout << "�հ�: " << result;
	
	return 0;
} 
