#include<bits/stdc++.h>
using namespace std;
const int Mod = 1000000000+7;
const int oo = 0x3f3f3f3f;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef long long LL;
typedef priority_queue<int> QQ;
#define lbit(a) (a&-a)
#define SZ(a) (int)a.size()
#define x first
#define y second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#ifdef CF
	#define FOPEN freopen("in.txt","r",stdin)
	#define BUG(x) cout<<x<<"_"<<endl;
#else
	#define FOPEN ;
	#define BUG(x) ;
#endif

const int N = 200000 + 5;


vector<LL> f;
void dfs(int p,int d,int n=10,LL now=0){
	if(p==0){
		for(int i=1;i<=9;i++){
			dfs(p+1,d,n-i,i);
		}
	}else if(p==d-1){
		f.pb(now*10+n);return;
	}else{
		for(int i=0;i<=n;i++){
			dfs(p+1,d,n-i,now*10+i);
		}
	}
}
int main(){
	int i=2;
	int n;cin>>n;
	while(SZ(f)<=10000){
		dfs(0,i++);
	}
	sort(all(f));
	printf("%I64d\n",f[n-1]);
}