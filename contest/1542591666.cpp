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


char s[3],a[110][3];
bool check(char *a,char *b){
	return a[0]==b[0]&&a[1]==b[1];
}
int main(){
	//freopen("A.in","r",stdin);
	//freopen("A.out","w",stdout);
	int i,j,k,ca=0,n,T,m=0;
	scanf("%s%d",s,&n);
	rep(i,0,n)scanf("%s",a[i]);
	rep(i,0,n){
		if(check(a[i],s)){puts("YES");return 0;}
	}
	char b[3];
	rep(i,0,n){
		rep(j,0,n){
			b[0]=a[i][1],b[1]=a[j][0];
			if(check(b,s)){puts("YES");return 0;}
		}
	}
	puts("NO");
	return 0;
}