#include<iostream>
using namespace std;

typedef long long ll;

ll a[100005];

int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	for(ll i=1;i<=m;i++){
		cin>>a[i];
	}
	ll count=0;
	ll kk=0;
	ll sum=0;
	ll k1=k;
	for(ll i=1;i<=m;i++){
		if(a[i]-count<=k){
			kk++;
		}
		else {
			if(kk>0)sum++;
			count+=kk;
			if((a[i]-count)%k1==0){
				k=(a[i]-count);
			}
			else {
				k=((a[i]-count)/k1+1)*k1;
			}
			kk=1;
		}
//		cout<<i<<" "<<count<<" "<<kk<<" "<<k<<endl;
	}
	if(kk>0){
		sum++;
	}
	cout<<sum<<endl;
	return 0;
}