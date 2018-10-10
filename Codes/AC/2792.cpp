#include <bits/stdc++.h>
using namespace std;
#define ll long long
string st;
void kill()
{
	cout << "Just a legend" << endl;
	exit(0);
}
struct H
{
	long long MOD, BASE;

	H(ll MOD, ll BASE) :
			MOD(MOD), BASE(BASE)
	{
	}

	ll fastpow(ll num, ll p)
	{
		if (p == 0)
			return 1;
		if (p & 1)
			return (num % MOD * fastpow(num, p - 1)) % MOD;
		ll a = fastpow(num, p / 2);
		return (a * a) % MOD;
	}

	ll removeAt(ll code, int idx, int val)
	{
		return (code - (val * fastpow(BASE, idx)) % MOD + MOD) % MOD;
	}

	ll addAt(ll code, int idx, int val)
	{
		return (code + (val * fastpow(BASE, idx)) % MOD) % MOD;
	}

	ll shiftLeft(ll code)
	{
		return (code * BASE) % MOD;
	}

};

const int N = 1e6 + 5;
ll sf[N], pr[N];

bool check(int l)
{
	H h1(2000000011ll, 53ll);
	ll val = 0, len = 0;
	for (int i = 1; i < st.size() - 1; i++)
	{
		if (len == l)
		{
			val = h1.removeAt(val, len - 1, st[i - len] - 'a');
			len--;
		}
		val = h1.shiftLeft(val);
		val = h1.addAt(val, 0, st[i] - 'a');
		len++;
		if (val == pr[l] && len == l)
			return 1;
	}
	return 0;
}
vector<int> vec;
void pre()
{
	H h1(2000000011ll, 53ll);
	ll v = 0;
	for (int i = 0; i < st.size(); i++)
	{
		v = h1.shiftLeft(v);
		v = h1.addAt(v, 0, st[i] - 'a');
		pr[i + 1] = v;
	}
	v = 0;
	int t = 0;
	for (int i = st.size() - 1; i >= 0; i--)
	{
//		v = h1.shiftLeft(v);
		v = h1.addAt(v, t++, st[i] - 'a');
		sf[st.size() - i] = v;
	}

	for (int i = 1; i <= st.size(); i++)
		if (pr[i] == sf[i])
			vec.push_back(i);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> st;
	int n = st.size();
	if (n < 3)
		kill();

	pre();
	int s = 0, e = vec.size(), ans = -1;

	if (vec.size() == 0)
		kill();
	while (s <= e)
	{
		int mid = (s + e) >> 1;
		if (check(vec[mid]))
			s = mid + 1, ans = vec[mid];
		else
			e = mid - 1;
	}
	if (ans == -1)
		kill();
	for (int i = 0; i < ans; i++)
		cout << st[i];
	return 0;

}
