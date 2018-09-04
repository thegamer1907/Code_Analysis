#include <bits/stdc++.h>

using namespace std;

long long f(long long n, long long k)
{
	long long l = ((long long)1 << n)-1;
	
	if (k == (l+1)/2)
		return n;
		
	if (k < (l+1)/2)
		return f(n-1, k);
		
	return f(n-1, k-(l+1)/2);
}

int main()
{
	long long n, k;
	cin >> n >> k;
	cout << f(n, k);
}