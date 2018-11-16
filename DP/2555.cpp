#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
	    cin>>a[i];
	int d = 1,ans = 1;
	for(int i=1;i<n;i++){
	    if(a[i] > a[i-1])
	        d++;
	    else{
	        ans = max(d,ans);
	        d = 1;
	    }
	}
	ans = max(d,ans);
	cout<<ans;
	return 0;
}
