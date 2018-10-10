#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define I insert
#define pll pair<ll,ll> 
#define vll vector<ll> 
ll sumo(ll x){
	ll a,b,c,i;a=x;
	b=0;
	while(a>0){
		b+=a%10;a/=10;
	}
	return b;
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);//cout<<setprecision(25);
	ll a,b,c,d,e,f,i,j,k;
	cin>>k;c=0;
	for(i=1;;i++){
		if(sumo(i)==10){
			c++;if(c==k){cout<<i;return 0;}
		}
	}
	// ll x[5][10]={{1,1,2,2,2,2},{1,1,1,1,2,2,2},{1,1,1,1,1,1,2,2},{1,1,1,1,1,1,1,1,2},{1,1,1,1,1,1,1,1,1,1}};
	// a=5;
	// for(i=0;i<5;i++){
	// 	a++;
	// 	do{
	// 		c++;if(c==k){
	// 			for(j=0;j<a;j++){
	// 				cout<<x[i][j];
	// 			}
	// 			return 0;
	// 		}
	// 	}while(next_permutation(x[i],x[i]+a));
	// }

	return 0;
}