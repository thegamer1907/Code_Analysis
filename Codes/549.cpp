#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int k,cnt,f[10001];
bool get(int k)
{
	int res=0;
	while(k)res+=k%10,k/=10;
	return res==10;
}
int main()
{
	for(int i=19;cnt<10000;i++)
	  if(get(i))f[++cnt]=i;
	scanf("%d",&k);return printf("%d\n",f[k]),0;
}
