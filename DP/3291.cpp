#include        <bits/stdc++.h>
#define ll      long long int
#define pb      push_back
#define mp      make_pair
#define F       first
#define S       second
#define MOD     100000000
#define pii     pair<int,int>
#define vi      vector<int>
#define fio     ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define N       200010
using namespace std;

int main(){
	ll l, r;
	cin>>l>>r;
	ll x=l^r;
	ll ans=0;
	ll i=0;
    while(x){
        ans+=((1LL)<<i);
        i++;
        x>>=1;
    }
    //ans+=(1<<i);
    cout<<ans;
	return 0;
}












