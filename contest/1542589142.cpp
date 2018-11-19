#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,flag=0,count1=0,count2=0;
	string s,x;
	cin >> s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		cin >> x;
		if(x==s)
		{
			flag=1;
			break;
		}
		if(x[0]==s[1])
			count2++;
		if(x[1]==s[0])
			count1++;
	}
	if(flag==1)
		printf("YES\n");
	else
	{
		i=count1 && count2;
		if(i==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}