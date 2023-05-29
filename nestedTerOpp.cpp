// C++ program to illustrate
// nested ternary operators
#include <bits/stdc++.h>

using namespace std;

int main()
{
	cout << "Execute expression using "
	<< "ternary operator: ";
	int a = 2 > 3 ? 2 : 3 > 4 ? 3 : 4;
	cout << a << endl;
	
	cout << "Execute expression using "
	<< "if else statement: ";
	if ( 2 > 3 )
		cout << "2";
	else if ( 3 > 4 )
		cout << "3";
	else
		cout << "4";
	return 0;
}
