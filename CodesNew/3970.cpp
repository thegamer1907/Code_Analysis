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
    int n,q;
    cin>>n>>q;
    ll a[n],b[q],c[n];
    ll sum=0;
    rep(i,0,n){
        cin>>a[i];
        sum+=a[i];
        if(!i)c[i]=a[i];
        else c[i]=a[i]+c[i-1];
    }
    rep(i,0,q)cin>>b[i];
    ll curr=0;
    rep(i,0,q){
        curr+=b[i];
        if(curr>=c[n-1]){
            cout<<n<<endl;
            curr=0;
            continue;
        }
        int l=0,r=n-1;
        while(l+1<r){
            int mid=(l+r)/2;
            if(c[mid]>curr)r=mid;
            else l=mid;
        }
       // cout<<curr<<" "<<l<<" "<<r<<" "<<c[r]<<" "<<c[l]<<endl;
        if(c[l]>curr)cout<<n-l<<endl;
        else if(c[l]==curr)cout<<n-1-l<<endl;
        else if(c[r]>curr)cout<<n-r<<endl;
        else if(c[r]==curr)cout<<n-r-1<<endl;
    }

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
