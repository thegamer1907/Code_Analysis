#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,flag=0;
	char passwd[5],str[105][5];
	cin >> passwd;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		cin >> str[i];
		if(strcmp(str[i],passwd)==0)
			flag=1;
	}
	for(i=1;i<=n;i++)
	{
		if(flag==1)
			break;
		for(j=1;j<=n;j++)
		{
			if(str[i][1]==passwd[0]&&str[j][0]==passwd[1])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag)
		cout << "YES\n";
	else
		cout <<"NO\n";
	return 0;
}
