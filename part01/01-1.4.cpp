#include <iostream>

int main (void) {
	int base = 50;
	int sales;
	
	while (true) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sales;
		if (sales == -1) {
			break;
		} 
		std::cout << "�̹� �� �޿�: " << (int)base + 0.12 * sales << "����" << std::endl; 
	} 
	std::cout << "���α׷��� �����մϴ�";
	return 0; 
}
