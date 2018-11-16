#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;

int abs(int a)
{
	return a<0? a*-1 : a;
}

int isprime(int a)
{
	if(a == 2 || a == 3) return 1;
	for(int i=2; i <= a/2; i++)
	{
		if(a%i == 0) return 0;
	}
	return 1;
}

int minimum(int a, int b)
{
	return a<b? a:b;
}

int maximum(int a, int b)
{
	return a>b? a:b;
}

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	char prev = s[0];
	int count=1;
	for(int i=1;i<n;i++)
	{
		if(prev == s[i])
		{
			count++;
		}
		else
		{
			prev = s[i];
			count = 1;
		}
		if(count >= 7)
		{
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}