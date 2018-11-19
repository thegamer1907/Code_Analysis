#include<bits/stdc++.h>
using namespace std;
#define ll int
#define fr first
#define sc second
#define MAX ((ll)(1e18+100))
#define MOD ((ll)(1e9+7))
#define HS1 ((ll)(137))
#define HS2 ((ll)(1e9+9))
#define ARRS ((ll)(1e5+900))
#define pb push_back

ll n;
string s,t;

ll k=0;

int main(){
	ll h,m,s,f,t;
	cin>>h>>m>>s;
	cin>>f>>t;
	m=m/5;
	s=s/5;
	if(f>t)swap(f,t);
	if(f<=h&&h<t)k|=1; else k|=2;
	if(f<=m&&m<t)k|=1; else k|=2;
	if(f<=s&&s<t)k|=1; else k|=2;
	if(k==3)cout<<"NO";
	else cout<<"YES";
	return 0;
}
