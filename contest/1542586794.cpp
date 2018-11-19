#include <cstdio> 
#include <iostream> 
#include <cmath> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <utility> 
#include <set> 
#include <map> 
#include <queue> 
#include <cstdlib> 
#include <ctime> 
#include <cstring> 
#include <cassert>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define A first
#define B second
#define SIZE(x) ((int)(x.size()))
template<class T> T sqr(const T &x) { return x*x; }
template<class T> int popcount(const T &n) { return (n==0)?0:(1+popcount(n&(n-1))); }
template<class T> void ckmin(T &a,const T &b) { if (b<a) a=b; }
template<class T> void ckmax(T &a,const T &b) { if (b>a) a=b; }
void win(){
	puts("yES");
	exit(0);
}
void lose(){
	puts("nO");
	exit(0);
}
int n,k;
int cnt[16];
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		int a[4]={0};
		for(int j=0;j<k;j++){
			scanf("%d",a+j);
		}
		cnt[a[0]+(a[1]<<1)+(a[2]<<2)+(a[3]<<3)]++;
	}
	for(int i=0;i<(1<<k);i++){
		for(int j=0;j<(1<<k);j++){
			if(i&j)continue;
			if(cnt[i]&&cnt[j])win();
		}
	}
	lose();
	return 0;
}