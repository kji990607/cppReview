#include <iostream>
#include <cstring>

using namespace std;

class Printer {
	private:
		char str[100];
	public:
		void SetString(char *a);
		void ShowString();
};

void Printer::SetString(char *a) {
	strcpy(str, a);
}

void Printer::ShowString() {
	cout << str << endl;
}

int main(void) {
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();
	
	pnt.SetString("I love C++");
	pnt.ShowString();
	
	return 0;
}

