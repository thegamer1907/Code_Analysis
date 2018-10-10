#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ll long long int
#define FF first
#define SS second
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define plld(x) printf("%lld\n",x)
#define pss printf
#define MOD 1000000007
#define INF 1e18
#define eps 0.00001
#define endl '\n'
#define debug(n1) cout<<n1<<endl
const int N = 1e5;  // limit for array size
ll n;  // array size

int main(){
	ll n,k;cin>>n>>k;
    ll n1=1;
    
    for(int i=0;i<n-1;i++){
    	n1=2*n1+1;
	}
	
    int c=0;
    
	while(n1>0){
		if(k==(n1-1)/2+1){
		   cout<<(n-1)-c+1<<endl;return 0;
		}
		else if(k>(n1-1)/2+1){
			k=k-n1/2-1;
		}
		n1/=2;c++;
	}
	
	cout<<1<<endl;
	return 0;
}