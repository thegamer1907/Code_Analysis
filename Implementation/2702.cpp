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
		int x;
		scanf("%d",&x);
		li[x]=i;
	}
	for(int i = 1;i<=n;i++)
	{
		if(i>1) printf(" ");
		printf("%d",li[i]);
	}
	printf("\n");
	return 0;
}
