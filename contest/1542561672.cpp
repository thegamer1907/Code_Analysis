///age yekam bekeshi beham is no problem ._.
#include<bits/stdc++.h>
#define ld long double
#define int long long
#define F first
#define S second
using namespace std;
void null(){return ;}
const int INF=3e18+9237;
const int maxn=1e5+7;
const int mod=1e9+7;
const int sqN=320;
const int lgN=20;
bool bk=true,fw=true;
ld a,b,h,m,s;

bool solve(){
	if(b>a){
		if( (h>a&&h<b)||
			(m>a&&m<b)||
			(s>a&&s<b) )
			return false;
	}
	if(a>b){
		if( (h>a||h<b)||
			(m>a||m<b)||
			(s>a||s<b) )
			return false;
	}
	return true;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>h>>m>>s>>a>>b;
	m+=s/60;h+=m/60;m/=5;s/=5;
	bool res=solve();
	swap(a,b);
	cout<<(res|solve()?"YES":"NO");
}

