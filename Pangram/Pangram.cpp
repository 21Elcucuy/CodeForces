#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool Contain(vector <char>&v , char c)
{
	for (int i = 0; i < v.size(); i++)
	{
		if (tolower(c) == v[i])
			return true;
  }
	return false;
}
void Damn()
{
	int Size; 
	cin >> Size; 
	string S;
	cin >> S;
	vector <char> v; 

	for (int i = 0; i < Size; i++)
	{
		if (v.size() == 26)
			break;
		if (!Contain(v, S[i]))
		{
			v.push_back(tolower(S[i]));


		}

	}
	
	if (v.size() == 26)
		cout << "YES";
	else
		cout << "NO";





}
int main()
{

	
	Damn();


	return 0;
}

