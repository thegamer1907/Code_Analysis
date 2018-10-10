#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	string s;
	ll cnt[3] = {}, nb, nc, ns, pb, pc, ps, rb, l = 0, r = 1'000'000'000'000'0, m;
	cin >> s;
	
	for (int i = 0; i < s.size(); i++)
		if (s[i] == 'B')
			cnt[0]++;
		else if (s[i] == 'S')
			cnt[1]++;
		else
			cnt[2]++;
			
	cin >> nb >> ns >> nc >> pb >> ps >> pc >> rb;
	
	while (l < r-1)
	{
		 m = (l+r)/2;
		 
		 ll amb, ams, amc;
		 amb = max((ll)0, m*cnt[0]-nb);
		 ams = max((ll)0, m*cnt[1]-ns);
		 amc = max((ll)0, m*cnt[2]-nc);
		 
		if (amb*pb+ams*ps+amc*pc <= rb)
			l = m;
		else
			r = m;
	}
	
	cout << l;
}