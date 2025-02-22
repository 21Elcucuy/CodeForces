#include <iostream>
using namespace std;
int main()
{
	string a;
	string b; 
	cin >> a;
	cin >> b;
		

	if (a == b)
		cout << "-1";
	else if (a.length() > b.length())
		cout << a.length();
	else
		cout << b.length();

	

}

