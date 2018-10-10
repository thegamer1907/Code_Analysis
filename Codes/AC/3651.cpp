#include <bits/stdc++.h>

using namespace std;

#define ll long long
string str;
int nb, ns, nc, pb, ps, pc, b, s, c;
ll r;

bool F(ll x, ll tot)
{
	if(b*x > nb)
		tot -= (b*x - nb)*pb;
	if(s*x > ns)
		tot -= (s*x - ns)*ps;
	if(c*x > nc)
		tot -= (c*x - nc)*pc;
	return tot >= 0;
}

int main()
{
	cin>>str;
	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pc;
	cin>>r;
	b = s = c = 0;
	for(int i=0;i<str.size();++i)
	{
		if(str[i] == 'B')
			++b;
		else if(str[i] == 'S')
			++s;
		else if(str[i] == 'C')
			++c;
	}
	ll low = 0, high = 2e12;
	while(high - low > 1)
	{
		ll mid = (low + high)/2;
		(F(mid, r))? low = mid : high = mid;
	}
	cout<<low<<endl;
	return 0;
}