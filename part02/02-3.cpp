//포인터 복습 후 다시 풀기 
#include <iostream>
using namespace std;

typedef struct __Point {
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2) {
	Point *calcul = new Point;
	calcul->xpos = p1.xpos + p2.xpos;
	calcul->ypos = p1.ypos + p2.ypos;
	return *calcul;
};

int main(void){
	Point *a = new Point;
	a->xpos = 10;
	a->ypos = 5;
	
	Point *b = new Point;
	b->xpos = 7;
	b->ypos = 5;
	
	Point &result = PntAdder(*a, *b);
	cout << "result xpos: " << result.xpos << endl << "result ypos: " << result.ypos;
	
	return 0;	
}
