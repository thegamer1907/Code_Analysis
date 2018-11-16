#include <bits/stdc++.h>
#define ll long long int
#define take(a) for(auto& i:a) {cin>>i;}
#define show(a) for(auto& i:a) {cout<<i<<" ";}
#define pb push_back
#define mp make_pair
#define loop(i,x,n) for(ll i=x;i<n;i++)
#define flag cout<<"flag"<<endl;
#define inf INT_MAX
#define ninf INT_MIN
#define MOD 1000000007
using namespace std;
typedef pair<ll,ll> pll;



int main(){
	int V,t;
	cin>>V>>t;
	int a;
	int x= 1;
	int flag1= 0;
	for(int i=1;i<V;i++){
		cin>>a;
		if(i==x){
			x= i+a;
		}
		if(x==t){
			flag1= true;
		}
	}
	if(flag1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}



