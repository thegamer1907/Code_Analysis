#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <time.h>
#include <string>
#include <map>
#include <stack>
#include <vector>
#include <set>
#include <queue>
#define inf 0x7fffffff
#define mod 10000
#define met(a,b) memset(a,b,sizeof a)
typedef long long ll;
using namespace std;
const int N = 5000+10;
const int M = 1000000;
double n,m;
double s,t1,t2;
double q,w,e,r;
double T1,T2;
int ans=0;
void solve(){
    if(w==T1||w==T2)printf("NO\n");
    else if(e==T1||e==T2)printf("NO\n");
    else if(r==T1||r==T2)printf("NO\n");
    else printf("YES\n");
}
void init(){
    w=q*30;
    q=m*60+s;
    q/=60;
    e=q*6;
    r=s*6;
    T1=t1*30;
    T2=t2*30;
}
int main() {
    cin>>n>>m>>s>>t1>>t2;
    q=(n*3600+m*60+s)*1.0/3600;
    
    init();
    if(T1>T2)swap(T1,T2);
    if(w>T1&&w<T2)ans++;
    if(e>T1&&e<T2)ans++;
    if(r>T1&&r<T2)ans++;
    if(ans==0||ans==3)solve();else printf("NO\n");
    return 0;
}
