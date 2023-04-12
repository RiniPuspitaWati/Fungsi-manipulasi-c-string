#include <iostream>
#include <cstring>
using namespace std;

//int main(){
//	char str[] = {'I','L','K','O','M','P','\0'};
//	
//	cout << str << endl;
//	cout << strlen(str) << endl;
//}

int main(){
	char firstName[50] = "Rini Puspita ";
	char lastName[50] = "Wati";
	char *fullName = strcat(firstName,lastName);
	cout << fullName;
}
