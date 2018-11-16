#include<iostream>
#include<vector>
#include<algorithm>

#define ssync ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define F first
#define S second
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;

const ll MOD = 1e9+7;
const ld PI = 3.14159265;

ll powerWithMod(ll base, ll exponent, ll modulus = LLONG_MAX)
{
	ll result = 1;
	base %= modulus;
	while(exponent > 0)
	{
		if(exponent % 2 == 1)
			result = (result * base) % modulus;
		exponent >>= 1;
		base = (base * base) % modulus;
	}
	return result;
}

ll modInverse(ll a, ll m = MOD)
{
	return powerWithMod(a, m-2, m);
}

template<typename T>
void term(T x)
{
	cout << x << "\n";
	exit(0);
}

int n, k, c;
vector<int> a, x;

int main()
{
	ssync;
    cin >> n >> k;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c += a[i]&1;
        if(2*c == i+1 and i+1<n)
            x.push_back(i);
    }
    for(auto& i : x)
        i = abs(a[i] - a[i+1]);
    sort(x.begin(), x.end());
    for(int i=1;i<x.size(); i++)
        x[i] += x[i-1];
    cout << std::upper_bound(x.begin(), x.end(), k) - x.begin() << "\n";
    return 0;
}
