#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<cmath>
#include<stdio.h>
#include<stack>
#include<queue>
#include<deque>
using namespace std;
typedef int int32_t;
#define int long long
#define elif else if
int32_t main()
{
	int n;
	cin>>n;
	int a,b;
	cin>>a>>b;
	--a;--b;
	for(int i=2,k=1;i<n;i*=2,++k)
	{
		if(a/i==b/i)
		{
			cout<<k;
			return 0;
		}
	}
	cout<<"Final!";
	return 0;
}