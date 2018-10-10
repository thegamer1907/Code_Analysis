#include <bits/stdc++.h>
using namespace std;
#define iinf 2000000000
#define linf 1000000000000000000LL
#define ulinf 10000000000000000000ull
#define MOD1 1000000007
#define lson(v) ((v)<<1)
#define rson(v) (((v)<<1)^1)
#define mpr make_pair
typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned long UL;
typedef unsigned short US;
typedef pair < int , int > pii;
clock_t __stt;
inline void TStart(){__stt=clock();}
inline void TReport(){printf("\nTaken Time : %.3lf sec\n",(double)(clock()-__stt)/CLOCKS_PER_SEC);}
template < typename T > T MIN(T a,T b){return a<b?a:b;}
template < typename T > T MAX(T a,T b){return a>b?a:b;}
template < typename T > T ABS(T a){return a>0?a:(-a);}
template < typename T > void UMIN(T &a,T b){if(b<a) a=b;}
template < typename T > void UMAX(T &a,T b){if(b>a) a=b;}
int n,z[1000005],z2[1000005],res;
bool vis[1000005];
char s[1000005],s2[1000005];
vector < int > son[1000005];
set < int > cur;
void dfs(int ver){
	vis[ver]=1;
	int xb;
	if(ver>0){
		set < int > ::iterator it=cur.upper_bound(z[ver]);
		if(it!=cur.begin()) UMAX(res,*(--it));
	}
	cur.insert(ver+1);
	for(xb=0;xb<son[ver].size();++xb){
		dfs(son[ver][xb]);
	}
	cur.erase(ver+1);
}
void getz(char *st,int *arr){
	arr[0]=0;
	pii maxv=mpr(0,-1);
	int xb,x2;
	for(xb=1;xb<n;++xb){
		if(xb>maxv.first){
			for(x2=xb;x2<n;++x2){
				if(st[x2]!=st[x2-xb]) break;
			}
			arr[xb]=x2-xb;
		}
		else{
			int itv=xb-maxv.second,ir=maxv.first-maxv.second;
			if(itv+arr[itv]-1<ir) 
				arr[xb]=arr[itv];
			else{
				for(x2=maxv.first+1;x2<n;++x2){
					if(st[x2]!=st[x2-xb]) break;
				}
				arr[xb]=x2-xb;
			}
		}
		if(z[xb]) UMAX(maxv,mpr(xb+z[xb]-1,xb));
	}
}
void getnxt(char *st,int *nxt){
	int xb,x2;
	for(xb=1;xb<n;++xb){
		for(x2=nxt[xb-1];x2!=0;x2=nxt[x2-1]){
			if(st[x2]==st[xb]) break;
		}
		if(st[x2]==st[xb]) ++x2;
		nxt[xb]=x2;
		if(x2)son[x2-1].push_back(xb);
	}
}
int main(){
    // inputing start
    scanf("%s",s);
	n=strlen(s);
	int xb,x2;
    #ifdef LOCAL
        TStart();
    #endif
    // calculation start
    memcpy(s2,s,sizeof(s));
	reverse(s2,s2+n);
	getz(s,z);
	getnxt(s2,z2);
	reverse(z,z+n);
	for(xb=0;xb<n;++xb) if(!vis[xb]) dfs(xb);
	if(res>0){
		for(xb=0;xb<res;++xb) printf("%c",s[xb]);
	}
	else printf("Just a legend");
    #ifdef LOCAL
        TReport();
    #endif
    return 0;
}