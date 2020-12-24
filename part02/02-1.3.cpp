#include <iostream>

using namespace std;

void SwapPointer (int *(&num1), int *(&num2)) {
	int *temp = num1;
	num1 = num2;
	num2 = temp;
}

int main(void) {
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 =10;
	int *ptr2 = &num2;
	
	SwapPointer(ptr1, ptr2);
	cout << *ptr1 << " " << *ptr2;
}
