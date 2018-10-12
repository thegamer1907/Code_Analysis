#include <bits/stdc++.h>
using namespace std;
#define maxn 10000001
#define fi first
#define se second
typedef long long int lli;
int main() {
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<int> a(maxn,0);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a[x] += 1;
	}
	vector<bool> isPrime(maxn,true);
	vector<int> c(maxn,0ll);
	for(lli i=2;i<maxn;i++){
		if(isPrime[i]){
			//cout<<i<<' ';
			for(lli j=i;j<maxn;j+=i){
				isPrime[j]=false;
				c[i] += a[j];
			}
		}
	}
	for(int i=2;i<maxn;i++)
		c[i] = c[i-1]+c[i];
		
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int l,r;
		cin>>l>>r;
		if(l>=maxn){ 
			cout<<0<<'\n';
			continue;
		}
		r = min(r, maxn-1);
		cout<<(c[r] -c[l-1])<<'\n';
	}
	return 0;
}