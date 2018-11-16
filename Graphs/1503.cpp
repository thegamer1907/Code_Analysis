/*
problem's name:
statue:
writer:Chris
*/
#include <iostream>
#include <map>
#include <vector>
#include <cstring>
#include <utility>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <string>
#include <stack>
#include <set>
#include <deque>
#include <cctype>
#include <sstream>
#include <math.h>
#include <stdio.h>
#include <time.h>
#define mp make_pair
typedef long long ll;
using namespace std;
const int INF=1e9;
/*------------main part------------*/
inline ll read()
{
    ll x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=(x<<3)+(x<<1)+ch-'0';ch=getchar();}
    return x*f;
}
int n,m,i,a[500000];
int main()
{	
	cin>>n>>m;
	for(i=0;i<n-1;i++)
	{
		cin>>a[i];
	}
	m--;
	i=0;
	while(i<m)
	{
	   i+=a[i];
	}
	if(i==m)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
