#include<iostream>
#include<algorithm>
//#include<bits/stdc++.h>
#include <string>
#include<vector>
#include<map>
#include<cstdio>
#include<set>
#include<utility>
#include<sstream>
using namespace std; 
long long fac(int a)
{
	long long num=0;
	for (int i = 1; i <= a; i++)
		num = num+i;
	return num;
}

int a[1000000];
int b[1000000];
int main() {
	int n;
	long long s;
	cin >> n >> s;
	for (int i= 0; i < n; i++)
	{
		cin >> a[i];
	}
	//sort(a, a + n);
	int max = n;
	for (int i = 0; i <= n; i++)
	{
		if (i*fac(i) < s)
			max = i;
		else break;
	}
	long long x = 0;
	for (max; max > 0; max--) {
		for (int i = 0; i < n; i++)
		{
			b[i] = a[i] + (i+1)*max;
		}
		sort(b, b + n);
		for (int i = 0; i < max; i++)
		{
			x = x + b[i];
		}
		if (x <= s)
		{
			cout << max<<" "<< x;
			break;
		}
		x = 0;
	}

	if (max==0)
		cout << 0 << " " << 0;




}