#include<cstdio>
#include<cstring>
#include<vector>
#include<cmath>
#include<iomanip>
#include<string>
#include<iostream>
#include<algorithm>
#include<utility>
#include<stack>
#include<deque>
#include<queue>
#include<set>
#include<map>
#include<bitset>
using namespace std;
const int maxsize=1e5+3,maxint=0X3f3f3f3f;
#define _USE_MATH_DEFINES
int arr[maxsize],freqarr[maxsize],a[maxsize],n,m,v=0;
int main ()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		if(freqarr[x]==0)
			v++;
		freqarr[x]++;
		arr[i]=x;
	}
	for(int i=0;i<n;i++)
	{
		a[i]=v;
		freqarr[arr[i]]--;
		if(freqarr[arr[i]]==0) v--;
	}
	for(int i=0;i<m;i++)
	{
		int y;
		scanf("%d",&y);
		printf("%d\n",a[y-1]);
	}
	return 0;
}