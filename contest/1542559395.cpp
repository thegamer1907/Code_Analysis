#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1;
	cin>>s1;
	int i=0,t;
	scanf("%d",&t);
	
	string s[t];

	while(i<t)
	{
	cin>>s[i];
	i++;
	}

	for(i=0;i<t;i++)
	{
	if(s[i]==s1)
	{	printf("YES");	return 0;	}
	else if(s[i][0]==s1[1]&&s[i][1]==s1[0])
	{	printf("YES");	return 0;	}
	for(int j=i+1;j<t;j++)
	{
	if(s[i][1]==s1[0]&&s[j][0]==s1[1]||s[i][0]==s1[1]&&s[j][1]==s1[0])
	{
	printf("YES");	return 0;}
	}
	}

	if(i==t)	printf("NO");	return 0;	}
	

