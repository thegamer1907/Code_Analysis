#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
using namespace std;

int main()
{
	int h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	if(t1 == t2)
	{
		cout<<"YES\n";
		return 0;
	}
	int top=0, bot=0;
	int min_deg = 6*m;
	int h_deg = (h*60 + m)/2;
	int s_deg = 6*s;
	int t1_deg= 30*t1;
	int t2_deg = 30*t2;
	if(t1_deg > t2_deg)
		swap(t2_deg, t1_deg);
	if(m == 0 && s == 0) 
	{
		if(h_deg >= t1_deg && h_deg <= t2_deg)
		bot=1;	
	else if(min_deg >= t1_deg && min_deg <= t2_deg)
		bot=1;	
	else if(s_deg >= t1_deg && s_deg <= t2_deg)
		bot=1;	
	if(h_deg >= t2_deg || h_deg <= t1_deg)
		top=1; 
	if(min_deg >= t2_deg || min_deg <= t1_deg)
		top=1; 
	if(s_deg >= t2_deg || s_deg <= t1_deg)
		top=1; 
	
	}
	else {
	if(h_deg >= t1_deg && h_deg < t2_deg)
		bot=1;	
	else if(min_deg >= t1_deg && min_deg < t2_deg)
		bot=1;	
	else if(s_deg >= t1_deg && s_deg < t2_deg)
		bot=1;	
	if(h_deg >= t2_deg || h_deg < t1_deg)
		top=1; 
	if(min_deg >= t2_deg || min_deg < t1_deg)
		top=1; 
	if(s_deg >= t2_deg || s_deg < t1_deg)
		top=1; 
	}
	if(bot && top)
		cout << "NO\n";
	else
		cout << "YES\n";
	
	return 0;
}