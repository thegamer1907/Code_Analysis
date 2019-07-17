#include<iostream>
#include<algorithm>
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
	sort(a+1,a+m+1);
	ll count=0;
	ll kk=0;
	ll sum=0;
	ll k1=k;
	for(ll i=1;i<=m;i++){
		if(kk==0&&a[i]-count>k){
			k+=k1;
		}
		if(a[i]-count<=k){
			kk++;
		}
		else {
			sum++;
			count+=kk;
			kk=0;
			i--;
		}
	}
	if(kk>0){
		sum++;
	}
	cout<<sum<<endl;
	return 0;
}