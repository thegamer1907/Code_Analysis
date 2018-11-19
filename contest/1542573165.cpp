#include<bits/stdc++.h>
using namespace std;
#define s(n) scanf("%lld",&n)
#define p(n) printf("%lld\n",n)
#define sf scanf
#define pf printf
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define hell 1000000007
#define rep(i,a,b) for(i=a;i<b;i++)

vll v;
map<ll,ll> M;

int main()
{
	ll t=1,n,m,i,j,k,sum=0,ans=0;
	
	cin>>n>>k;
	ll a[n][k];
	ll k1=1,k2=1,k3=1,k4=1;
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			cin>>a[i][j];
		}
	}
	if(k==1){
		for(i=0;i<n;i++){
			if(a[i][0]==0){
				cout<<"YES";
				return 0;
			}
		}
		cout<<"NO";
	}
	else if(k==2){
		for(i=0;i<n;i++){
			if(a[i][0]==0)
				k1=0;
			if(a[i][1]==0)
				k2=0;
		}
		if(!k1 && !k2)
			cout<<"YES";
		else
			cout<<"NO";
	}
	else if(k==3){
		for(i=0;i<n;i++){
			if(a[i][0]==0)
				k1=0;
			if(a[i][1]==0)
				k2=0;
			if(a[i][2]==0)
				k3=0;
		}
		if(k1 || k2 || k3)
			cout<<"NO";
		else{
			for(i=0;i<n;i++){
				M[a[i][0]*100+a[i][1]*10+a[i][2]*1]++;
			}
			if(M[0] || M[100] || M[10] || M[1])
				cout<<"YES";
			else
				cout<<"NO";
		}
	}
	else{
		for(i=0;i<n;i++){
			if(a[i][0]==0)
				k1=0;
			if(a[i][1]==0)
				k2=0;
			if(a[i][2]==0)
				k3=0;
			if(a[i][3]==0)
				k4=0;
		}
		if(k1 || k2 || k3 || k4)
			cout<<"NO";
		else{
			for(i=0;i<n;i++){
				M[a[i][0]*1000+a[i][1]*100+a[i][2]*10+a[i][3]*1]++;
			}
			if(M[0]||M[1000] || M[100] || M[10] || M[1])
				cout<<"YES";
			else{
				if((M[11]&&M[1100]) || (M[101]&&M[1010]) || (M[1001] && M[110]))
					cout<<"YES";
				else
					cout<<"NO";
			}
		}
	}
	return 0;
}