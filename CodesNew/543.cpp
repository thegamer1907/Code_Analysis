#include<cstdio>
#include<vector>
#include<set>
#include<bitset>
#include<algorithm>
#include<map>
#include<cmath>
#define ll long long
#define MAXSIZE 10000000
using namespace std;
map<int,int>mp;
vector<int> vp,primes,a(MAXSIZE+1,0);
ll maxPrime,start;
void sieve(int n){
	bitset<MAXSIZE+1> b;
	b.reset();
	primes.push_back(2);
	ll i = 3;
	for(;i*i<= n;i+=2){
		if(!b.test(i)){
			primes.push_back(i);
			for(ll j=i*i;j<=n;j+=2*i) b.set(j);
		}
	}
	for(;i<=n;i+=2) if(!b.test(i)) primes.push_back(i);
}
int main(){
	int n,m,l,r,max1 = 0,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&x),max1 = max(max1,x),a[x]++;
	sieve(max1);
	maxPrime = primes[primes.size()-1];
	maxPrime += 10;
	vector<int> sum(maxPrime+5,0);
	for(unsigned i=0;i<primes.size();i++){
		for(int j=primes[i];j<=max1 ;j+=primes[i])
			if(a[j]) sum[primes[i]] += a[j];
	}
	for(int i=1; i <= maxPrime;i++) sum[i] += sum[i-1];
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d%d",&l,&r);
		if(l > maxPrime) printf("0\n");
		else{
			if(r > maxPrime) r = maxPrime;
			 printf("%d\n",sum[r] - sum[l-1]);
		}
	}
	return 0;
}
