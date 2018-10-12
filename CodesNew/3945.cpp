#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef long double ld;
 
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
 
#define PB push_back
#define ff first
#define ss second
 
#define FOR(prom,a,b) for ( ll prom = (a); prom < (ll)(b); ++prom )
#define F(a) FOR(i,0,a)
#define FF(a) FOR(j,0,a)
 
#define EPS (1e-10)
#define EQ(a,b) (fabs(a-b) <= fabs(a+b) * EPS)
#define LINF (1LL<<62LL)
 
#define DEB cerr << "DEB: "
#define MX 0
 
 
 
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
 	ll n, q,pom,sum=0;
 	cin >> n >> q;
 	vi arr(n);
 	F(n){
 		cin >> arr[i]; 
 		if(i!=0){
 			arr[i]+=arr[i-1];
 		}
 	}
 	F(q){
 		cin >> pom;
 		sum+=pom;
 		if(sum<arr[n-1]){
 			ll lo=0,hi=n-1,mid=0;
 			while(lo<hi){
 				mid=(lo+hi)/2;
 				if(arr[mid]<=sum){lo=mid+1;}else{hi=mid;}
 				//DEB << lo << " "<< mid << " "<< hi << endl;
 			}
 			if(arr[mid]<=sum){mid++;}
 			cout << n-mid << endl;
 		}else{
 			sum=0;
 			cout << n << endl;
 		}
 	}
    return 0;
}