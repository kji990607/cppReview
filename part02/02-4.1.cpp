#include <iostream>
#include <cstring>

using namespace std;

char *str = "abc";
char str2[100];
char *str3 = "copy this";

int main(void){
cout << strlen(str) << endl;

strcat(str2, str);
cout << str << endl;

strcpy(str2, str3);
cout << str3 << endl;

cout << "������ 0�̸� str2�� str3�� ����: " << strcmp(str2, str3);

return 0;
}
