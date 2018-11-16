#include<iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string t = s;
	int x,y;
	x = s.find("AB");
	if( x != -1)
	{
		s.replace(x,2,"**");
		y = s.find("BA");
		if( y != -1)
			cout << "YES" << endl;
		else
		{
			x = t.find("BA");
			if( x != -1)
			{
				t.replace(x,2,"**");
				y = t.find("AB");
				if(  y != -1) cout << "YES" << endl;
				else cout << "NO" << endl;
			}
			else cout << "NO" << endl;
		}
	}
	else cout << "NO" << endl;
	return 0;
}


		
