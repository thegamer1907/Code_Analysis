#include <bits/stdc++.h>
using namespace std;
// for( auto i :Templatename) // use dot notation
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector< iii > viii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<bool> vb;

#define PQ priority_queue
#define eb emplace_back
#define pb push_back
#define eps 10e-6
#define PI 3.14159265359
#define MOD 1000000007
#define INF MOD
#define fi first
#define se second
#define FOR(i,n) for(int i=0;i<n;i++)
#define scani(n) scanf("%d",&n)
#define seti(a,n) memset(a,n,sizeof(a))
#define set0(a) memset(a,0,sizeof(a))
#define MAX 10000005
//global variable
int n,m,l,r;
int pre[MAX],f[MAX];
//global end

void preprocess(){
	FOR(i,MAX)
		pre[i]=i;
	for(int i=4;i<MAX;i+=2)
		pre[i]=2;
	for(int i=3;i<3200;i+=2){
		if(pre[i]==i)
			for(int j=i<<1;j<MAX;j+=i)
				pre[j]=i;
	}
	set0(f);
}
void fac(int a){
	while(a>1){
		int t=pre[a];
		f[t]++;
		while(a%t==0) a/=t;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.precision(17);
	preprocess();
	cin>>n;
	int temp;
	FOR(i,n){
		cin>>temp;
		fac(temp);
	}

	FOR(i,MAX-2)
		f[i+1]+=f[i];
	cin>>m;
	FOR(i,m){
		cin>>l>>r;
		l= min(l, 10000001);
		r= min(r, 10000001);
		cout<<f[r]-f[l-1]<<"\n";
	}

	return 0;
}