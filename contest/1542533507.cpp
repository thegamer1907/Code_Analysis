/*input
*/		
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define I insert

ll x[20];
ll nosbit(ll q){
	ll a=0,i,b=0;
	i=0;
	while((1<<i)<=q){
		if((1<<i)&q)a++;i++;
	}
	return a;
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll n,k,a,b,c,d,i,j;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		a=0;
		for(j=0;j<k;j++)
		{
			cin>>b;
			a=a*2+b;
		}
		x[a]++;
	}
	if(x[0]>0){cout<<"Yes";return 0;}
	for(i=0;i<k;i++){
		a=1<<i;if(x[a]==0)continue;
		for(j=0;j<(1<<k);j++){
			if(x[j]>0&&((j&a)==0)){
				cout<<"YEs";return 0;
			}
		}
	}
	for(i=0;i<(1<<k);i++){
		if(nosbit(i)!=2)continue;
		if(x[i]<=0)continue;
		for(j=0;j<(1<<k);j++){
			if(x[j]>0&&((j&i)==0)){
				cout<<"YES";return 0;
			}}
	}
	cout<<"NO";
	return 0;
}