#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <iomanip>
#include <math.h>
#include <vector>
#include<cctype>
#include<algorithm>
#include<set>
#include<stack>
#include<map>
#include<time.h>
#include<iterator>
#include <deque>
#include <sstream>
#include<queue>
#include<stdlib.h>
#include<bitset> 
#include <utility>
#include<assert.h>
#include<functional>
#include<limits.h>

#define fn(i,n) for(int (i) = 0;(i) < (n);(i)++)
#define f1n(i,n) for(int (i) = 1;(i) <= (n);(i)++)
#define mk(f,s) make_pair((f),(s))
 
#define defV(dp,e) memset(dp,e,sizeof dp)
 
#define ri(n) scanf("%d",&n)
#define rl(n) scanf("%lld",&n)
#define rs(s) scanf("%s",s)
 
#define PI acos(-1.0)
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int > pp;
 
typedef vector<int  > v1;
typedef vector<ll  > vl;
typedef vector<pp  > vpp;
typedef vector<bool  > vb;
typedef vector<char > vc;
typedef vector<v1 > v2;
 
int const oo = 1e9, bound = 1e6 + 1, mod = oo + 7, N = 1e7+1, CON =  30000001;
ll const OO = 1e18;

v1 pr;
ll tr[N];
int isp[N];
int main() {
    //	freopen("input.txt", "r", stdin);
    for(int i=2;i*i<=N-1;i++)
    if(isp[i]==0){
        isp[i]=i;
        for(int j=i*i;j<=N-1;j+=i)isp[j]=i;
    }
    f1n(i,N-1){
        if(isp[i]==0)isp[i]=i;
        if(isp[i]==i)pr.push_back(i);
    }
    int n;
    ri(n);
    fn(i,n){
        int ee;
        ri(ee);
        while(ee>1){
            tr[isp[ee]]++;
            int y=isp[ee];
            while(ee%y==0)ee/=y;
        }
    }
    f1n(i,N-1)tr[i]+=tr[i-1];
/*    f1n(i,10)cout<<tr[i]<<' ';
    cout<<endl;*/
    int m;
    ri(m);
    fn(i,m){
        int l,r;
        ri(l),ri(r);
        int f=lower_bound(pr.begin(),pr.end(),l)-pr.begin();
        int e=upper_bound(pr.begin(),pr.end(),r)-pr.begin();
        if(f==(int)pr.size()||f==e)puts("0");
        else printf("%lld\n",tr[pr[e-1]]-tr[pr[f]-1]);
    }
    return 0;
    
}






