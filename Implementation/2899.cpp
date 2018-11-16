#include<bits/stdc++.h>
using namespace std;

string s;

bool is_vow(char x)
{
	return (x=='a') || (x=='o') || x=='y' || x=='e' || x=='u' || x=='i';
}

int ada[14] = {4,7,47,74,44,77,444,447,474,477,744,747,774,777};

int li[105];
int n;

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&li[i]);
	}
	int tmp = 1000;
	int id=-1;
	for(int i=1;i<=n;i++)
	{
		if(tmp>=li[i])
		{
			id = i;
			tmp = li[i];
		}
	}
	for(int i=id;i<n;i++) li[i] = li[i+1];
	int ans = n-id;
	tmp = 0;
	id = -1;
	for(int i=1;i<n;i++)
	{
		if(tmp < li[i])
		{
			id = i;
			tmp = li[i];
		}
	}
	ans+=id-1;
	printf("%d\n",ans);
	return 0;
}
