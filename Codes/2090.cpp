#include <bits/stdc++.h>
#define X first
#define Y second
#define ll long long
#define INF 10000000000000007ll
#define MOD 1000000007ll
#define PI 3.14159265359
#define rep(i, x, n) for (int i = x; i < n; i++)
#define rev(A) reverse((A).begin(), (A).end())
#define sorv(A) sort((A).begin(), (A).end())
#define pb push_back
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
#define dbv(v) cout << "Printing "#v << " --> \n"; for(int i=0;i<v.size();i++) cout << v[i] << " "; cout << "\n";
#define dbst(st) cout << "Printing "#st << " --> \n"; for(auto i=st.begin();i!=st.end();i++) cout << *i << " "; cout << "\n";
#define dbmp(mp) cout << "Printing "#mp << " --> \n"; for(auto i=mp.begin();i!=mp.end();i++) cout << #mp"[" << i->first << "]"<< " = " << i->second << "\n";
template <typename Arg1>void ZZ(const char* name, Arg1&& arg1){std::cout << name << " = " << arg1 << std::endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr(names + 1, ',');
    std::cout.write(names, comma - names) << " = " << arg1;
    ZZ(comma, args...);
}
using namespace std;

ll n, k, q;
vector<ll> ar, ar1, ar2;
map<ll, ll> mp1, mp2;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	ar.resize(n);
	ar1.assign(n, 0);
	ar2.assign(n, 0);
	for (ll i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	for (ll i = 0; i < n; i++)
	{
		if (ar[i] % k == 0 && mp1.find(ar[i] / k) != mp1.end())
		{
			ar1[i] = mp1[ar[i] / k];
		}
		mp1[ar[i]]++;
	}
	for (ll i = n - 1; i >= 0; i--)
	{
		if (mp2.find(ar[i] * k) != mp2.end())
		{
			ar2[i] = mp2[ar[i] * k];
		}
		mp2[ar[i]]++;
	}
	ll ans = 0;
	for (ll i = 0; i < n; i++)
	{
		ans += (ar1[i] * ar2[i]);
	}
	cout << ans << endl;
	return 0;
}
