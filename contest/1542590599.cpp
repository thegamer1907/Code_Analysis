#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#define mem(a,b) memset(a,b,sizeof(a))
#define ll long long
#define ull unsigned long long
#define EPS 1e-8
using namespace std;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
const double pi = acos(-1.0);
int read()
{
	int ret=0;char ch=getchar();
	while(ch<'0'||ch>'9') ch=getchar();
	for(;ch>='0'&&ch<='9';ch=getchar()) ret=ret*10+ch-'0';
	return ret;
}
bool flag1,flag2,flag3;
string s1,s2;
int n; 
int main()
{
 	#ifdef TEST
	 	freopen("input.txt","r",stdin);
	#endif
	flag1=flag2=flag3=false;
	cin>>s1;
	scanf("%d",&n);
	while(n--)
	{
		cin>>s2;
		if(s2==s1)
		{
			flag1=true;
			continue;
		}
		if(s1[0]==s2[1]&&s2[0]==s1[1])
		{
			flag1=true;
			continue;
		}
		if(s2[1]==s1[0])
		{
			flag2=true;
			continue;
		}
		if(s2[0]==s1[1])
		{
			flag3=true;
		}
	}
	if(flag1||(flag2&&flag3))
	{
		puts("YES");
		return 0;
	}
	puts("NO");
	return 0;
}

