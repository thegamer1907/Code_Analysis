#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#define ll long long
#define pr(a) cerr<<#a<<"="<<a<<endl;
#define pri(a,lo) {cerr<<#a<<"={";for (int ol=0;ol<=lo;ol++)cerr<<a[ol]<<",";cout<<"}"<<endl;}
using namespace std;
#define N 1001000
char ch[N];
int z[N],l,r,i,len,mx1,mx2;
int main()
{
	scanf("%s",ch);
	int len=strlen(ch);
	l=r=0;
	for (i=1;i<len;i++)
	{
		if (i>r) 
		{
			int now=0;
			while (ch[now]==ch[now+i]) now++;
			z[i]=now;
			if (now!=0) r=i+now-1,l=i;
		}
		else if (z[i-l]+i-1<r) z[i]=z[i-l];
		else 
		{
			int now=1;
			while (ch[r+now]==ch[r+now-i]) now++;
			z[i]=r+now-i;
			r=z[i]+i-1,l=i;
		}
	}
	for (i=1;i<len;i++)
	{
		if (z[i]+i-1==len-1) mx1=max(mx1,z[i]-1);
		else mx1=max(mx1,z[i]);
	}
	for (i=1;i<len;i++) 
		if (z[i]+i-1==len-1) 
			if (z[i]<=mx1) mx2=max(mx2,z[i]); 
	if (mx2==0) printf("Just a legend\n");
	else 
		for (int j=0;j<mx2;j++) printf("%c",ch[j]);
	return 0;
}