#include<iostream>
#inlcude "switch.h"

using std::cin; using std::cout;


int main() 
{
	cout << "Enter a Number(1-4):";
	cin >> option;

	string result = menu(option);

	cout << result;

	return 0;
}