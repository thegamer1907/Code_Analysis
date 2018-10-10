//in the name of god
#include <bits/stdc++.h>
using namespace std;
#define MAX_N (int)1e6+20
#define INF 1e18+20
#define pb push_back
#define F first
#define S second
#define lch(A) (A)<<1
#define rch(A) ((A)<<1)|1
#define par(A) (A)>>1
typedef  long long LL;
#define int LL
typedef pair<int,int> pii;
const int delta=(LL)1e9+7;
int n,m,k;
map<string,int>p;
string s,A[]={"NO","YES"};
main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>s; p[s]++;
	}
	for(int i=1;i<=m;++i){
		cin>>s; if(p[s]) k++;
	}
	n-=k; m-=k;
	if(n==m) cout<<A[k%2];
	else cout<<A[n>m];
	return cout<<endl,0;
}