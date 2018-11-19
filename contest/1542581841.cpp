#include <bits/stdc++.h>

using namespace std;
#define pii pair<int,int>
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define rep(i,a,b) for(int i=a;i<b;i++)
#define per(i,a,b) for(int i=b-1;i>=a;i--)
#define DBG(x) cerr<<(#x)<<"="<<x<<"\n";
#define inf 1000000007
#define mod 1000000007
#define ll long long 
#define N 100010

template<class T,class U> void Max(T &a,U b){if(a<b)a=b;}
template<class T,class U> void Min(T &a,U b){if(a>b)a=b;}
template<class T,class U> void add(T &a,U b){a+=b;if(a>=mod)a-=mod;}


int a[1<<4],b[16];
int main(){
	//freopen("A.in","r",stdin);
	//freopen("A.out","w",stdout);
	int i,j,k,ca=0,n,T,m=0;
	scanf("%d%d",&n,&m);
	rep(i,0,n){
		int s=0;
		rep(j,0,m){
			scanf("%d",&k);
			if(k)s|=1<<j;
		}
		a[s]++;
	}
	if(a[0]){
		puts("YES");return 0;
	}
	k=1<<m;
	rep(s,1,(1<<k)){
		rep(i,0,k)if(s>>i&1)b[i]=1;else b[i]=0;
		int ok=1;
		rep(i,0,k)if(b[i]&&a[i]==0){ok=0;break;}
		if(ok){
			int c[4]={0},sz=0;
			rep(i,0,k)if(b[i]){
				sz++;
				rep(j,0,m)if(i>>j&1)c[j]++;
			}
			rep(j,0,m)if(c[j]>sz-c[j])ok=0;
			if(ok){
				puts("YES");return 0;
			}
		}
	}
	puts("NO");
	return 0;
}