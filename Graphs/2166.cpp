#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4")
 
 
#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cassert>
#include <iomanip>
#include <cstdio>
#include <queue>
#include <set>
#include <map>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
//#include <unordered_map>
#include <numeric>
 
using namespace std;
 
const int mod = 1e9 + 7;

const int N = 3e5;
int d[N],q[N],n,k;
bool can(int x){
    if(x<0||x>100000)  return false;
    return true;
}
void init(){
	#ifdef Judge
	SpeedUp;
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	#endif
	scanf("%d%d",&n,&k);
}
void bfs(){
    memset(d,-1,sizeof(d));
    int l=0,r=0;
    q[r++]=n;d[n]=0;
    while(l<r){
        int now=q[l];
        if(now==k){printf("%d\n",d[now]);return ;}
        if(can(now-1)&&d[now-1]==-1)d[now-1]=d[now]+1,q[r++]=now-1;
        if(can(now<<1)&&d[now<<1]==-1)d[now<<1]=d[now]+1,q[r++]=now<<1;
        l++;
    }
}
int main(){
	init();
    if(k<=n)return printf("%d\n",n-k),0;
    bfs(); 
    return 0;
}