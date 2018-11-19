//In the name of Allah
#include <bits/stdc++.h>
#define fs first
#define sc second
#define pb push_back

using namespace std;

typedef long long ll;
const int N=2e6+7, INF=1e9, mod=60;
const double PI = 3.141592653589793238462643383279502884197, eps=1e-6;

int h, m, s;

bool check(int t1, int t2)
{
	while(t1!=t2)
	{
		if(h==t1 || m==t1 || s==t1)
			break;

		t1 = (t1+1)%mod;
	}

	return t1==t2;
}

int main()
{
	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int t1, t2;

	cin >> h >> m >> s >> t1 >> t2;

	h = (h%12)*5;
	t1 = (t1%12)*5;
	t2 = (t2%12)*5;

	cout << (check(t1,t2)||check(t2,t1) ? "YES" : "NO");

	return 0;
}
