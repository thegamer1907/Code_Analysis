#include<bits/stdc++.h>
#define ll long long int 
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,i,sum=0,sum1,mx;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]==0){
			a[i]=1;
		}
		else{
			a[i]=-1;
		}
	}
	sum1=0;
	mx=-1000;
	for(i=0;i<n;i++){
		sum1+=a[i];
		mx=max(mx,sum1);
		if(sum1<0){
			sum1=0;
		}
	}
	cout<<mx+sum;
}