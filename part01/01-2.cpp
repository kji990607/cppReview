#include <iostream>

void swap (int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap (char *a, char *b) {
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap (double *a, double *b) {
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main (void) {
	int num1 = 20, num2 = 30;
	swap (&num1, &num2);
	std::cout << num1 << ' ' << num2 <<std::endl;
	
	char char1 = 'A', char2 = 'Z';
	swap (&char1, &char2);
	std::cout << char1 << ' ' << char2 <<std::endl;
	
	double dbl1 = 1.111, dbl2 = 5.555;
	swap (&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 <<std::endl;
	return 0;
}
