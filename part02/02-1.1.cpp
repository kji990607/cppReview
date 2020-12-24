#include <iostream>

using namespace std;

void increaseOne (int &param) {
	param++;
}

void switchSign (int &param) {
	param *= -1;
}

int main(void){
	int a = 3;
	int b = 5;
	
	increaseOne(a);
	switchSign(b);
	
	cout << a << endl;
	cout << b;
}
