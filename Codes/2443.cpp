#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <iomanip>
#include <map>
#include <queue>
#include <set>
#include <cstring>
using namespace std;
typedef long long int ll;
#define pb push_back
#define F first
#define S second
const int MAXN=1e6+7;
const int MAX=1e7+7;
ll a[MAX],p[MAX];
bool prime[MAX];
void sieve(ll n){
	memset(prime,1,sizeof prime);
	for (ll i=2;i*i<=n;i++){
		if (prime[i]){
			for (ll j=i*2;j<=n;j+=i)
				prime[j]=0;
		}
	}
}
int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	sieve(MAX-7);
	ll n,q,l,r;cin >> n;
	for (ll i=0;i<n;i++)cin >> q,a[q]++;
	for (ll i=2;i<=MAX-7;i++){
		if (!prime[i])continue;
		for (ll j=i;j<=MAX-7;j+=i)p[i]+=a[j];
	}
	for (ll i=1;i<=MAX-7;i++)p[i] = p[i-1] + p[i];
	cin >> q;
	for (ll i=0;i<q;i++){
		cin >> l >> r;
		if (l > MAX-7)l=MAX-7;
		if (r > MAX-7)r=MAX-7;
		cout << p[r]-p[l-1] << '\n';
	}	
}