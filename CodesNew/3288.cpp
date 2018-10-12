/* ****Enigma27**** */

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define ios	    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll i,j,k,sum,n,ans=0,a[100005],b[100005]={0},x,t,c,m,d,q;
int main()
{	 
	ios
	cin>>n;
	for(i=0;i<n;i++) cin>>a[i],sum+=a[i];
	ans+=(sum+n-2)/(n-1);
	cout<<max(ans,*max_element(a,a+n))<<endl;
	return 0;
}