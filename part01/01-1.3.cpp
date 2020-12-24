#include <iostream>

int main (void) {
	int dan;
	
	std::cout << "구구단 숫자 입력: ";
	std::cin >> dan; 
	
	for (int i=1; i<=9; i++) {
		std::cout << dan << " * " << i << " = " << dan * i << std::endl;
		
	}
	
	return 0;
}
