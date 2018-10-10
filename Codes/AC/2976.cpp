#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005
int lps[MAX],has[MAX];
int main()
{
	string s;
	cin>>s;
	int i=1;
	int len=0;
	while(i<s.length())
	{
		if(s[i]==s[len])
		{
			lps[i]=len+1;
			len++;
			i++;
		}
		else
		{
			if(len!=0)
				len = lps[len-1];
			else
			{
				lps[i]=0;
				len=0;
				i++;
			}
		}
	}
	int mini = s.length()-1;
	int isExists=0;
	while(mini>=0 && lps[mini]>0)
	{
		has[lps[mini]]=1;
		mini=lps[mini]-1;
	}
	mini=lps[s.length()-1];
	int maxi=0;
	for(int i=0;i<s.length()-1;i++)
	{
		if(has[lps[i]] && maxi<=lps[i] && i>lps[i]-1)
		{
			maxi=lps[i];
			isExists=1;
		}
	}
	if(mini>=maxi)
		mini=maxi;
	if(mini==0 || !isExists)
	{
		printf("Just a legend\n");
	}
	else
	{
		for(i=0;i<mini;i++)
		{
			printf("%c",s[i] );
		}
		printf("\n");
	}
	return 0;
}