#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

vector<bool> prime(10000001, true);
// memset(prime, true, sizeof(prime));
 

void SieveOfEratosthenes(int n)
{
    
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
}

void f() 
{
	int n;
	cin >> n;
	int maxm = 0;
	vector<int> a(n);
	for(int i = 0; i<n; i++)
	{
		cin >> a[i];
		maxm = max(a[i], maxm);
	}
	vector<int> cnt(maxm+1);

	for(int i = 0; i<n; i++)
		cnt[a[i]]++;

	vector<long long> f(maxm+1);
    // long long f[maxm]

	SieveOfEratosthenes(maxm);

	for(int i = 2; i<=maxm; i++)
	{
		if(prime[i])
		{
			for(int j = i; j<=maxm; j+=i)
			{
				f[i] += cnt[j];
			}
		}
	}

// 	for(int i = 0; i<=maxm; i++)
// 	{
// 		cout << i << ' ' << prime[i] << endl;
// 	}
// 	cout << endl;
	for(int i = 3; i<=maxm; i++)
	{
		if(prime[i])
		{
			f[i]+=f[i-1];
// 			cout << 'p';
		}		
		else {
			f[i] = f[i-1];
// 			cout << 'n';
		}

// 		cout << i << ' ' << f[i] << endl;
	}

	int m;
	cin >> m;
// 	cout << m << endl;
	for(int i = 0; i<m; i++)
	{
		int l, r;
		cin >> l >> r;
		if(r>maxm)
			r = maxm;

		if(l>r)
			cout << 0 << "\n";
		else 
			cout << f[r] - f[l-1] << "\n";
	}


	

}

int main()
{
	std::ios::sync_with_stdio(false);
    int t = 1;
    // cin>>t;             //comment out if only one test case
    for (int i = 0; i < t; ++i)
    {
        f();
    }
    return 0;
}
