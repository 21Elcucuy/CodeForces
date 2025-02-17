#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int Size; 
	cin >> Size;
	int* Player = new int[Size];
	
	int index; 
	for (int i = 0; i < Size; i++)
	{
		cin >> Player[i] ;
	}
	int CountTeam = 0;
	bool Count1 = true;
	bool Count2 = false; 
	bool Count3 = false; 
	int Index1 = 0;
	int Index2 = 0;
  string Team = "";

	
	short Recal = 0;
	for (int z = 0; z < Size; z++)
	{
		if (Player[z] == 1 && Count1)
		{
			Index1 = z + 1; 
			Player[z] = 9;
			Count2 = true;
			Count1 = false;
			Recal = 0;
		}
		else if (Player[z] == 2 && Count2)
		{
			Index2 = z + 1;
			Player[z] = 9;
			Count2 = false;
			Count3 = true;
			Recal = 0;
		}
		else if (Player[z] == 3 && Count3)
		{
			
			Team += to_string(Index1) + " " + to_string(Index2) + " " + to_string(z + 1) + "\n";
		    Player[z] = 9;
			Count1 = true;
			Count3 = false;
			Recal = 0;
			CountTeam++;
		}	
		
		if (z == Size - 1 && Recal < Size  )
		{
			z = -1 ;
		}
		Recal ++;

	}
	
	cout << CountTeam << endl;
	cout << Team << endl; 



       
	return 0; 
}

