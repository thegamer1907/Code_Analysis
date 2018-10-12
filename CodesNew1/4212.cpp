#include<bits/stdc++.h> 

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

ll n,q,a[212345],s[212345],curr;

int main()
{
	ssync;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
         cin>>a[i];
         a[i] += a[i-1];
    }
    a[n+1] = numeric_limits<ll>::max();
    for(int i=1;i<=q;i++)
    {
        cin >> s[i];
        curr += s[i];
        auto x = upper_bound(a+1, a+n+1, curr);
        if(x == a+n+1)
        {
            curr = 0;
            cout << n << "\n";
        }
        else
        {
            x--;
            cout << a+n-x << "\n";
        }
    }
    return 0;
}
