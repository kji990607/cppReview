#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void) {
	//srand�� ������ �����ϱ� ���� �õ带 �����Ѵ�. �õ带 �ð����� �����ϸ� �׻� �ٸ� ���� ���� �� �ִ�
	srand(time(NULL));
	
	for(int i =1; i <=5; i++){
		cout << rand()%100 << endl; 
	} 
	
	return 0;
}
