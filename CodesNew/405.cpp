//** aman**/
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define dl          double
#define hell        1000000007
#define endl        '\n'
#define rep(i,a,b) for(int i=a;i<b;i++)
#define lb lower_bound
#define ub upper_bound
#define bs          binary_search
#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int a[100005];
int main(){
	int n,f;cin>>n>>f;
	int a[n+1];a[0]=0;int ans=0,x=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(int i=0;i<n;i++){
		ans=ub(a,a+n+1,a[i]+f)-a;
		x=max(ans-i-1,x);
	}
	cout<<x<<endl;
}