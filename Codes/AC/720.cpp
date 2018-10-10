#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void fast()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
ll k, t, pos;
ll sm(ll x)
{
	ll y = x, ra = 0;
	while (y !=0)
		ra += y % 10, y /= 10;
	return ra;
}
int main()
{
	cin >> k;
	while (1)
	{
		if (sm(pos) == 10)
			t++;
		//cout << pos << " " << sm(pos) <<endl;
		if (t == k)break;
		 pos++;
	}
	cout << pos << "\n";
	return 0;
}