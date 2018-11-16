#include <iostream>
#include <stdio.h>
#include <string>
#include <ctype.h>
#include <vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	long long n, t, hold[100000], x = 1;
	cin >> n >> t;
	for(long long i = 1; i < n; ++i)
		cin >> hold[i];
	while(x < t)
		x += hold[x];
	puts(x == t?"YES":"NO");
	return 0;
}