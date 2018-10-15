//** aman**/
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<ll,ll>
#define vi          vector<ll>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define dl          double
#define hell        1000000007
#define endl        '\n'
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define lb lower_bound
#define ub upper_bound
#define bs          binary_search
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int main(){
	int n,cnt=0;cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n);
	int ii=n/2,jj=n;
	while(ii>0){
		if(2*a[ii]<=a[jj]){
			cnt++;ii--;jj--;
		}
		else ii--;
	}
	cout<<n-cnt<<endl;
}