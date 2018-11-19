#include<iostream>
#include<math.h>
#include<cctype>
#include<cerrno>
#include<cfloat>
#include<ciso646>
#include<climits>
#include<clocale>
#include<cmath>
#include<csetjmp>
#include<csignal>
#include<cstdarg>
#include<cstddef>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<string>
#include<string.h>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	string a,b;
	cin>>a;
	vector<string> v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b;
		if(b==a)
		{
			cout<<"YES";
			return 0;
		}
		v.push_back(b);
	}
	char a1=a[0],a2=a[1];
	for(int i=0;i<n;i++)
	if(v[i][0]==a2)
	{
		for(int j=0;j<n;j++)
		if(v[j][1]==a1)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"No";
	return 0;
}
