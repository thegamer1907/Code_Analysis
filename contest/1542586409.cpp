/******************************************
*    AUTHOR:         CHIRAG AGARWAL       *
*    INSTITUITION:   BITS PILANI, PILANI  *
******************************************/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;
const int MAX=1e2+5;
string sr[MAX];

int main() 
{
	string s;
	cin>>s;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>sr[i];
	}	
	for(int i=1;i<=n;i++)
	{
		if(s==sr[i])
		{
			printf("YES\n");
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(sr[i][1]==s[0]&&sr[j][0]==s[1])
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}