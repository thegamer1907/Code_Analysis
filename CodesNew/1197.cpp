#include <bits/stdc++.h>

#define ll          long long
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (int)x.size()
#define endl        '\n'
#define hell        1000000007
#define rep(i,a,b)  for(int i=a;i<b;i++)
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[n];
    rep(i,0,n){
        cin>>a[i];
        a[i]-=i;
        a[i]=max(a[i],0);
    }
    int ans=hell;
    int idx=0;
    rep(i,0,n){
        if(a[i]==0){
            cout<<i+1;
            return;
        }
        if((a[i]/n)*n==a[i]){
            if(a[i]/n<ans){
                ans=a[i]/n;
                idx=i+1;
            }
        }
        else{
            if(a[i]/n+1<ans){
                ans=a[i]/n+1;
                idx=i+1;
            }
        }
    }
    cout<<idx;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
   // cin>>t;
	while(t--){
		solve();
	}
	return 0;
}

