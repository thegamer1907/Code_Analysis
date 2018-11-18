#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
int main()
{
	int i, n, j;
	string parol, s;

	cin >> parol;
	cin >> n;
	string *a = new string [n];
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(i = 0; i < n; i++)
	{
		if (((a[i][0] == parol[0]) && (a[i][1] == parol[1])) || ((a[i][1] == parol[0]) && (a[i][0] == parol[1]))) {cout << "YES"; return 0;}
		else 
		{
			if (a[i][0] == parol[1])
			{
				for (j = i+1; j < n; j++)
				{
					if(a[j][1] == parol[0]) {cout << "YES"; return 0;}			
				}
			}
			if (a[i][1] == parol[0])
			{
				for (j = i+1; j < n; j++)
				{
					if(a[j][0] == parol[1]) {cout << "YES"; return 0;}			
				}
			}
		}
	}
	cout << "NO";
}