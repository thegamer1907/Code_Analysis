#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define sd(x) scanf("%d",&x);
#define sll(x) scanf("%I64d",&x);

int main()
{
	float h,m,s;
	int t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	if(h==12)
		h=0;
	t1 = t1 % 12;
	t2 = t2 % 12;
	h = h + (m/60.0) + (s/3600.0) + 12 - t1;
	m = (m + (s/60.0))/5.0 + 12 - t1;
	s = s/5.0 + 12 - t1;
	t2 = t2 + 12 - t1;
	if(h>=12)
		h -= 12;
	if(m>=12)
		m -= 12;
	if(s>=12)
		s -= 12;
	if(t2>=12)
		t2 -= 12;
	t1 = 0;
	if(((t2 < h && t2 < m && t2 < s) || (t2 > h && t2 > m && t2 > s)) && (t1 < h && t1 < m && t1 < s))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}