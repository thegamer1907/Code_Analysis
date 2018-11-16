#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	int boyut=0,hamle=0;
	cin >> boyut >> hamle >> str;

	for(int j=0;j<hamle;j++)
	{
		for(int i=0;i<boyut-1;i++)
		{
			if(str[i]=='B' && str[i+1]=='G')
			{
				str[i]='G';
				str[i+1]='B';
				i++;
			}

		}
	}
	cout << str << endl;

	return 0;
}
