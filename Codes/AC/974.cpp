//#include<bits/stdc++.h>  
#pragma comment(linker, "/STACK:1024000000,1024000000")   
#include<stdio.h>  
#include<algorithm>  
#include<queue>  
#include<string.h>  
#include<iostream>  
#include<math.h>                    
#include<stack>
#include<set>  
#include<map>  
#include<vector>  
#include<iomanip> 
#include<bitset>
#include<time.h>
using namespace std;         //

#define ll long long  
#define ull unsigned long long
#define pb push_back  
#define FOR(a) for(int i=1;i<=a;i++) 
#define sqr(a) (a)*(a)
//#define dis(a,b) sqrt(sqr(a.x-b.x)+sqr(a.y-b.y))
ll qp(ll a,ll b,ll mod){
	ll t=1;while(b){if(b&1)t=t*a%mod;b>>=1;a=a*a%mod;}return t;
}
struct DOT{int x;int y;};
inline void read(int &x){int k=0;char f=1;char c=getchar();for(;!isdigit(c);c=getchar())if(c=='-')f=-1;for(;isdigit(c);c=getchar())k=k*10+c-'0';x=k*f;} 
void ex(){puts("-1");exit(0);}
const int dx[4]={0,0,-1,1};
const int dy[4]={1,-1,0,0};
const int inf=0x3f3f3f3f; 
const ll Linf=0x3f3f3f3f3f3f3f3fll;
const ll mod=1e9+7;
const double pi=acos(-1.0);
const double eps=1e-7;

const int maxn=1e5+3;

int k,n;
char s[maxn];
int psua[maxn];
int psub[maxn];

bool chk(int len){
	for(int i=1;i<=n-len+1;i++){
		if(psua[i+len-1]-psua[i-1] <= k)return true;
		if(psub[i+len-1]-psub[i-1] <= k)return true;
	}
	return false;
}

int main(){
	scanf("%d%d",&n,&k);
	scanf("%s",s+1);
	for(int i=1;i<=n;i++){
		psua[i]=psua[i-1]+(s[i]=='a');
		psub[i]=psub[i-1]+(s[i]=='b');
	}		
	int l=1,r=n;
	int ans=1;
	while(l<=r){
		int mid=l+r>>1;
		if(chk(mid)){
			ans=mid;
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	printf("%d\n",ans);
}


































