#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#define N 1000010
using namespace std;
char s[N];int z[N],n;
int main()
{
	scanf("%s",s+1);n=strlen(s+1);
	if(n<3) return !printf("Just a legend\n");
	for(int i=2,l=1,r=0;i<=n;i++)
	{
		(i>r)?(z[i]=(s[i]==s[1])):(z[i]=min(min(z[r-l+1-(r-i)],r-i+1),n-i+1));
		while(i+z[i]<=n&&s[i+z[i]]==s[1+z[i]]) z[i]++;
		if(i+z[i]>r&&z[i]) l=i,r=i+z[i]-1;
	}
	int ans=0,mx=0;
	for(int i=2;i<=n;i++)
	{
		if(i+z[i]-1==n&&mx>=z[i])
			ans=max(ans,z[i]);
		mx=max(mx,z[i]);
	}
	if(!ans) return !printf("Just a legend\n");
	for(int i=n-ans+1;i<=n;i++)
		printf("%c",s[i]);
	return !printf("\n");
}