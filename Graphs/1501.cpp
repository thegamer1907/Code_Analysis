// author: hjy
// Problem:
#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define fi first
#define se second
#define PB push_back
#define MP make_pair
#define ll long long
#define ull unsigned long long
#define debug(x) cerr<<#x<<"="<<x<<'\n'
#define rep(i,n) for(int i=0; i<(int)(n); ++i)
#define all(x) (x).begin(),(x).end()
//#pragma GCC optimize(2)

inline int read(){
	int x=0,ng=1;
	char ch=getchar();
	while(ch<'0'||ch>'9') { if(ch=='-') ng=-1; ch=getchar(); }
	while(ch>='0'&&ch<='9') { x=x*10+ch-'0'; ch=getchar(); }
	return ng?-x:x;
}

const int mod=1e9+7;
const int inf=0x3f3f3f3f;

int n,t;
int a[30300];

int main()
{
	scanf("%d%d",&n,&t);
	t--;
	rep(i,n-1) scanf("%d",&a[i]);
	int k=0;
	while(k<t)
		k=a[k]+k;
	if(k==t) puts("YES");
	else puts("NO");
	return 0;
}


