#include <iostream>

using namespace std;

class Calculator {
	private:
		int cntAdd;
		int cntDiv;
		int cntMin;
		int cntMul;
	public:
		void Init();
		double Add(double a, double b);
		double Div(double a, double b);
		double Min(double a, double b);
		double Mul(double a, double b);
		void ShowOpCount();
};

void Calculator::Init(){ 
	cntAdd = 0;
	cntDiv = 0;
	cntMin = 0;
	cntMul = 0;
}

double Calculator::Add(double a, double b) {
	cntAdd++;
	return a + b;
}

double Calculator::Div(double a, double b) {
	cntDiv++;
	return a / b;
}

double Calculator::Min(double a, double b) {
	cntMin++;
	return a - b;
}

double Calculator::Mul(double a, double b) {
	cntMul++;
	return a * b;
}

void Calculator::ShowOpCount() {
	cout << "����: " << cntAdd << " "; 
	cout << "����: " << cntMin << " ";
	cout << "����: " << cntMul << " "; 
	cout << "������: " << cntDiv;
}

int main(void) {
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2 ,2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	
	return 0;
}
