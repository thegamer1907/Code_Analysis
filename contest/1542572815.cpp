#include <bits/stdc++.h>
using namespace std;
int main()
{
	char pass[3];
	cin >> pass;
	pass[2] = '\0';
	int n;
	cin >> n;
	char a[n][3];
	int s[27]={0};
	int end[27]={0};
	bool  flag=false;;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		s[a[i][0]-97]++;
		end[a[i][1]-97]++;
		if(pass[0]==a[i][0]&& pass[1]==a[i][1])
		{
			flag = true;
		}


	}
	if(flag==true)
	{
		cout << "YES\n";
		
	}
	else if(end[pass[0]-97]>0 && s[pass[1]-97]>0)
	{
		cout << "YES\n";
	}
	
	else
	{
		cout << "NO\n";
	}

}