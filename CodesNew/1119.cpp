#include <bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll l=1,r=n;
    ll can=n,vas=0,mid;
    while(l+1<r){
        mid=(l+r)/2;
        can=n,vas=0;
        while(can){
            if(can<mid){
               vas+=can;
               can=0;
            }

            else {
                    vas+=mid;
                    can-=mid;
            }
            can-=can/10;
        }
        if(vas*2>=n)r=mid;
        else l=mid;
    }
    mid=l;
    can=n,vas=0;
    while(can){
        if(can<mid){
            vas+=can;
            can=0;
        }

        else {
                vas+=mid;
                can-=mid;
        }
        can-=can/10;
    }
    if(vas*2>=n)cout<<l;
    else cout<<r;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
    //cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
