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

int n ,s[3123], c[3123], ans=MOD;

int main()
{
	ssync;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=0;i<n;i++)
        cin>>c[i];
    for(int j=1; j<n-1; j++)
    {
        int ci=MOD,ck=MOD;
        for(int i=0;i<j;i++)
            if(s[i]<s[j])
                ci = min(ci, c[i]);
        if(ci == MOD)
            continue;
        for(int k=j+1;k<n;k++)
            if(s[j]<s[k])
                ck = min(ck, c[k]);
        if(ck == MOD)
            continue;
        ans = min(ans, ci+ck+c[j]);
    }
    ans = ans==MOD?-1:ans;
    term(ans);
	return 0;
}
