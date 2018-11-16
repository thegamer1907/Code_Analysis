#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n ,t;
	string s, j = "";
	cin >> n >> t >> s;
	
	if(n == 1)
	{
		cout << s;
	}
	else
	{
		for(int i = 0; i < t; i++)
		{
			for(int k = 0; k < n - 1; k++)
			{
				if(s[k] == 'B' && s[k + 1] == 'G')
				{
					j += "G";
					j += "B";
					k++;
				}
				else
				{
					j += s[k];
				}
			}
			
			if(s[n - 2] == 'G' || s[n -1] == 'B')
			{
				j += s[n - 1];
			}
			
			s = j;
			j = "";
		}
		
		cout << s;
	}
	
	return 0;
}
