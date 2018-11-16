#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, p = "0";
	cin >> s;
	int a = s.length(), t = 1, f = 1;
	
	for(int i = 0; i < a; i++)
	{
		if(s[i] == p[0])
		{
			t++;
		}
		else
		{
			if(p == "0")
			{
				p = "1";
			}
			else
			{
				p = "0";
			}
			
			t = 1;
		}
		
		if(t == 7)
		{
			cout << "YES";
			f = 0;
			break;
		}
	}
	
	if(f)
	{
		cout << "NO";
	}
	
	return 0;
}
