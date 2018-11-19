#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)
#define LEFT(n) (2*(n))
#define RIGHT(n) (2*(n)+1)
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
 
ll pwr(ll base, ll p, ll mod = MOD){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}
 
ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}

typedef vector<double> VD;
typedef vector<VD> VVD;
typedef vector<int> VI;

double h,m,s,t1,t2;
int cnt = 0;
int main()
{
	ios_base::sync_with_stdio(false);
	scanf("%lf %lf %lf %lf %lf",&h,&m,&s,&t1,&t2);
	if(h == 12)
		h = 0;
	h = h*30 + m/2 + s/120;
	m = m*6 + s/10;
	s = s*6;
	t1 = t1*30;
	t2 = t2*30;

	if(h >= 360)
		h = h-360;
	if(m >= 360)
		m = m-360;
	if(s >= 360)
		s =s-360;
	if(t1 >= 360)
		t1 =t1-360;
	if(t2 >= 360)
		t2 =t2-360;

	// printf("%lf %lf %lf %lf %lf\n",h,m,s,t1,t2);

	if(t1 == t2)
		printf("YES\n");
	else if(t1 < t2)
	{
		cnt =  0;
		if(h > t1 && h < t2)
			cnt++;
		if(m > t1 && m < t2)
			cnt++;
		if(s > t1 && s < t2)
			cnt++;
		if(cnt == 0 || cnt == 3)
			printf("YES\n");
		else
			printf("NO\n");
	}
	else
	{
		cnt =  0;
		if(h > t2 && h < t1)
			cnt++;
		if(m > t2 && m < t1)
			cnt++;
		if(s > t2 && s < t1)
			cnt++;
		if(cnt == 0 || cnt == 3)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}