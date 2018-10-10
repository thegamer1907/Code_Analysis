#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define ff first.first
#define fs first.second
typedef long long ll;
typedef unsigned long long ull;

//const ll mod = 1e16+371;
//const ll mod = 1e12+193;
//const int mod = 1e9+7;

const double PI = acos(-1);
const ll mod = 1e9+7;
const int INF = 1e9;
const int MAX=1e5+10, N=1e7+10;

vector<int>prm(N);
vector<int>p(N,1);
void sieve(){
	p[0]=p[1]=0;
	for(int i=2;i<N;i++){
		if(p[i]){
			prm[i]=i;
			for(int j=i*2;j<N;j+=i)
				p[j]=0,prm[j]=i;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	//	cin.tie(0);

	sieve();
//	for(int i=0;i<100;i++)
//		cerr<<prm[i]<<endl;
//	cerr<<prm.size()<<endl;
//	for(int i=0;i<100;i++)cerr<<prm[i]<<endl;

	int n;
	cin>>n;
	vector<int>acc(N,0);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		int lst=0;
		while(x>1){
			if(prm[x]!=lst)
				acc[prm[x]]++;
			lst=prm[x];
			x/=prm[x];
		}
	}
//	for(int i=0;i<20;i++)
//		cerr<<i<<" "<<acc[i]<<endl;
	for(int i=1;i<N;i++)
		acc[i]+=acc[i-1];
//	for(int i=0;i<20;i++)
//		cerr<<i<<" "<<acc[i]<<endl;
	int m;
	cin>>m;
	while(m--){
		int l,r;
		cin>>l>>r;
		l=min(l,N-2);
		r=min(r,N-2);
		cout<<acc[r]-acc[l-1]<<endl;
	}

	return 0;
}
