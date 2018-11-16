#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<int,int>
#define pb push_back
#define F first
#define S second
#define dbg(a,b) cout<<#a<<"="<<a<<endl<<#b<<"="<<b<<endl
#define dbgv(v) for(auto i:v)cout<<i<<" ";cout<<endl
#define mpq priority_queue<pll,vector<pll>,greater<pll> >
#define ub(s,x) upper_bound(s.begin(),s.end(),x)-s.begin()
#define lb(s,x) lower_bound(s.begin(),s.end(),make_pair(x,(ll)0))-s.begin()
#define mod 1e9+7
void solve(){
	string s;
	cin>>s;
	char p='2';
	int ct=0;
	for(auto i:s){
		if(p!=i){
			if(ct>6){
				cout<<"YES";
				return;
			}
			ct=1;
			p=i;
		}
		else
			ct++;
	}
	if(ct>6)cout<<"YES";
	else
		cout<<"NO";
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
	//cin>>t;
	while(t--)
	solve();
}