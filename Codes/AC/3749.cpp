#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <fstream>
#include <cmath>
#include <sstream>
#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
using namespace std;
long long int max(long long int a, long long int b)
{
	return a>b?a:b;
}
int main()
{
	long long int b = 0,s = 0,c = 0;
	string ham;
	cin >> ham;
	int len = ham.size();
	for(int i = 0; i<len; i++)
	{
		if(ham[i] == 'B')
		{
			b++;
		}
		else if(ham[i] == 'C')
		{
			c++;
		}
		else
		{
			s++;
		}
	}
	long long int nb,nc,ns,pb,ps,pc,r;
	cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
	long long int left = 0,right = 10000000000000;
	while(left+1<right)
	{
		long long mid = (left+right)/2;
		long long int cost = pb*max(0,(mid*b)-nb) + ps*max(0,(mid*s)-ns) + pc*max(0,(mid*c)-nc);
		if(cost<=r)
		{
			left = mid;
		}
		else
		{
			right = mid;
		}
	}
	cout << left << endl;
}