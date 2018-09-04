#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

const int N = 10000001;
using namespace std;

int spf[N +10];
vector <int> prime_factors;

void sieve()
{
	spf[1] = 1;
	for(int i = 2; i < N; i += 2)
		spf[i] = 2;
	
	for(int i = 3; i < N; i += 2)
		spf[i] = i;
	
	for(int i = 3; 1ll *i *i < N; i++) 	
		if(spf[i] == i)
			for(ll j = 1ll *i *i; j < N; j += i)
				if(spf[j] == j)
					spf[j] = i;
}

void factorise(int n)
{
	int prev = 0;
	while(n != 1)
	{
		if(spf[n] != prev)
			prime_factors.push_back(spf[n]);
			
		prev = spf[n];
		n /= spf[n];
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	sieve();
	
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		int foo;
		cin >> foo;
		factorise(foo);		
	}
	
	sort(prime_factors.begin(), prime_factors.end());
	
	int m;
	cin >> m;
	
	while(m--)
	{
		int l, r;
		cin >> l >> r;
		
		int st = lower_bound(prime_factors.begin(), prime_factors.end(), l) -prime_factors.begin() +1;
		int end = upper_bound(prime_factors.begin(), prime_factors.end(), r) -prime_factors.begin();
		
		if(st > end)
		{
			cout << "0\n";
			continue;
		}
		
		cout << end -st +1 << '\n';
	}
	
	return 0;
}