#include  <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string str;
	int j=0,k=0,flag=0;
	cin >> str;
	cin >> n;
	string guess[n];
	int i=0;
	for(i=0;i<n;i++)
	{
		cin >> guess[i];
	}
	for(i=0;i<n;i++)
	{
		if(guess[i][0]==str[0]&&guess[i][1]==str[1])
		{	
			flag=1;
			cout << "YES" << endl;
			break;
		}
		else if(guess[i][0]==str[1]&&guess[i][1]==str[0])
		{	
			flag=1;
			cout << "YES" << endl;
			break;
		}
		else
		{
			if(guess[i][0]==str[1])
				j=1;
			else if(guess[i][1]==str[0])
				k=1;
		}
	}
	if(flag==0)
	{
		if(j==1&&k==1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}