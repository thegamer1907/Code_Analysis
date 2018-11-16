/*input
4
1 4 6 2
5
5 1 5 7 9
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;
typedef pair<int,int> pii;
typedef pair<ll,ll>   pll;

#define err(l,a1) cerr<<"debug : "<<l<<" arg : "<<a1<<endl; 

#define pb push_back
#define mp make_pair
#define fs first 
#define mems(m,b) memset(m,b,sizeof(m));
#define all(v) v.begin(),v.end()
#define ss second
#define rep(i,a,b) for(int i = a;i<b;i++)
#define repr(i,a,b) for(int i = a;i>=b;--i)
#define sd(x) scanf("%d",&x);

#define mod 1000000007
#define maxn 105
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int T=1;
int bs[maxn],gs[maxn];


int main(){
	int n,m;
	cin>>n;
	for(int i = 0;i<n;++i){
		cin>>bs[i];
	}
	cin>>m;
	multiset<int>mm;
	for(int j = 0;j<m;++j){
		cin>>gs[j];
		mm.insert(gs[j]);
	}
	sort(bs,bs+n);
	int np = 0;
	for(int i = 0;i<n;++i){
		auto it = mm.find(bs[i]-1);
		if(it!=mm.end()){
			mm.erase(it);
			++np;
			continue;
		}

		it = mm.find(bs[i]);
		if(it!=mm.end()){
			mm.erase(it);
			++np;
			continue;
		}

		it = mm.find(bs[i]+1);
		if(it!=mm.end()){
			mm.erase(it);
			++np;
		}
	}
	cout<<np;
return 0;
}
