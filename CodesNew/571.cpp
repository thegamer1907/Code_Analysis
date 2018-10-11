//http://codeforces.com/problemset/problem/385/C
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi>vvi;
typedef vector<string> vs;

#define REP(i,n) for (i=0;i<n;i++)
#define FOR(i,p,k) for (i=p; i<=k;i++)

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ss string
#define ll long long
#define pb push_back
#define p2(a,b) cout<<a<<" "<<b<<endl;
#define p3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl;	
#define all(a) a.begin(),a.end()
#define set_val(arr,n,x) fill_n(arr,n,x)
#define M 1000000007
//std::vector<int>::iterator

int main(){
	fastio;
	int n,i,x,j,N=1e7+5;
	cin>>n;
	vi count(N+1,0);
	REP(i,n){ cin>>x; count[x]++;}

	//Sieve of Eratosthenes
	vector<ll> f(N+1);
	vector<bool> isPrime(N+1,true);
	for(i=2;i<=N;i++){
		if(isPrime[i]){
			f[i]=count[i];
			for(j=2*i;j<=N;j+=i){ 
				isPrime[j]=false;
				f[i]+=count[j];
			}
		}
	}
	//transforming f to make each query in contant time
	FOR(i,2,N) f[i]+=f[i-1];

	//query time
	int m,y;
	cin>>m;
	REP(i,m){
		cin>>x>>y;
		x=min(N,x);
		y=min(N,y);
		cout<<f[y]-f[x-1]<<"\n";
	}
	return 0;
}