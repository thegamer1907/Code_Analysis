#include <bits/stdc++.h>
#define mis(x) cout << #x <<" = " <<x<<endl
#define rep(i, a, b) for(int i=(a);(i)<(b);(i)++)
#define re(i,a) rep((i),0,(a))
using namespace std;
typedef long long ll;
const ll c=INT_MAX;
ll n,a,mi=c,l;

int main(){
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a;
		ll o=(a-i+n)/n;
		if(o<mi){
			mi=o;
			l=i;
		}
	}
	cout<<l<<"\n";
}

