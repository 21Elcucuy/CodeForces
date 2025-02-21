#include <iostream>
using namespace std;
int main()
{
	int Size;
	cin >> Size; 

	int* Ar = new int[Size];
	int Min = 0, Max = 0;
	for (int i = 0; i < Size; i++)
	{
		cin >> Ar[i];
	}

	for (int i = 0;i < Size; i++)
	{
		if (i == 0)
		{
			Min = Ar[1] - Ar[0];
			Max = Ar[Size - 1] - Ar[0];

		}
		if (i == Size - 1)
		{
			Min = Ar[Size -1] - Ar[Size - 2];
			Max = Ar[Size - 1] - Ar[0];
		}
		
		if (!(i == 0) && !(i == Size - 1))
		{
			Min = Ar[i] - Ar[i - 1];
			Max = Ar[i] - Ar[0];
				if (Min > Ar[i + 1] - Ar[i])
					Min = Ar[i + 1] - Ar[i];
				if (Max < Ar[Size -1] - Ar[i])
					Max = Ar[Size -1] - Ar[i];
		}

		cout << Min << " ";
		cout << Max << endl;



	}






	return 0;
}

