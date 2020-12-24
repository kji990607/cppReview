#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void) {
	//srand는 난수를 생성하기 위한 시드를 설정한다. 시드를 시간으로 지정하면 항상 다른 값을 얻을 수 있다
	srand(time(NULL));
	
	for(int i =1; i <=5; i++){
		cout << rand()%100 << endl; 
	} 
	
	return 0;
}
