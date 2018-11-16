// ta.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <set>

using namespace std;


int main()
{
	long long n, a, b;
	cin >> n >> a >> b;
	long long t = 2;
	long long cnt = 1;
	a--, b--;
	while(true)
	{
		if(a / t == b / t)
		{
			if(t == n)
				cout << "Final!";
			else
				cout << cnt;
			break;
		}
		t*=2;
		cnt++;
	}
	cin >> n;
	return 0;
}

