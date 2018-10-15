#include <bits/stdc++.h>
#define hell 1000000007
using namespace std;
long long int a[200005];
int main(){	
	long long int i,j,k,n,q,power,ans;
	cin>>n>>q;
	cin>>a[0];
	for(i=1;i<n;i++){
	    cin>>a[i];
		a[i]+=a[i-1];
	}
	power=0;
	ans=0;
	while(q--){
		cin>>k;
		power+=k;
		ans=upper_bound(a,a+n,power)-a;
		if(ans==n){
		    ans=0;
		    power=0;
		    
		}
		cout<<n-ans<<"\n";
	}
	return 0;
}