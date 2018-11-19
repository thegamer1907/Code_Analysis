#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <iostream>
#include <fstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstring>
#include <map>
#include <iterator>
#include <limits.h>
#include <assert.h>

using namespace std;

#define HI              printf("HI\n")
#define ps              printf("PASS\n")
#define sf              scanf
#define pf              printf
#define sf1(a)          scanf("%d",&a)
#define sf2(a,b)        scanf("%d %d",&a,&b)
#define sf3(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sf4(a,b,c,d)    scanf("%d %d %d %d",&a,&b,&c,&d)
#define sf1ll(a)        scanf("%lld",&a)
#define sf2ll(a,b)      scanf("%lld %lld",&a,&b)
#define sf3ll(a,b,c)    scanf("%lld %lld %lld",&a,&b,&c)
#define sf4ll(a,b,c)    scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define forln(i,a,n)    for(int i=a ; i<n ; i++)
#define foren(i,a,n)    for(int i=a ; i<=n ; i++)
#define forg0(i,a,n)    for(int i=a ; i>n ; i--)
#define fore0(i,a,n)    for(int i=a ; i>=n ; i--)
#define pb              push_back
#define ppb             pop_back
#define ppf             push_front
#define popf            pop_front
#define ll              long long int
#define ul              unsigned long
#define ull             unsigned long long
#define fs              first
#define sc              second
#define clr( a, b )     memset((a),b,sizeof(a))
#define jora            pair<int, int>
#define jora_d          pair<double, double>
#define jora_ll         pair<long long int, long long int>
#define mp              make_pair
#define max3(a,b,c)     max(a,max(b,c))
#define min3(a,b,c)     min(a,min(b,c))

template<class T1> void deb(T1 e1)
{
    cout<<e1<<endl;
}
template<class T1,class T2> void deb(T1 e1,T2 e2)
{
    cout<<e1<<" "<<e2<<endl;
}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3)
{
    cout<<e1<<" "<<e2<<" "<<e3<<endl;
}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4)
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;
}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5)
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;
}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6)
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;
}

/// <---------------------------  For Bitmasking  -------------------------------->
//int on( int n, int pos ){
//    return n = n|(1<<pos);
//}
//bool check( int n, int pos ){
//    return (bool)(n&(1<<pos));
//}
//int off( int n, int pos ){
//    return n = n&~( 1<<pos );
//}
//int toggle( int n, int pos ){
//    return n = n^(1<<pos);
//}
//int count_bit( int n ){
//    return __builtin_popcount( n );
//}
/// <---------------------------  End of Bitmasking  -------------------------------->


/// <--------------------------- For B - Base Number System ----------------------------------->
//int base;
//int pw[10];
//void calPow(int b){
//    base = b;
//    pw[0] = 1;
//    for( int i = 1; i<10; i++ ){
//        pw[i] = pw[i-1]*base;
//    }
//}
//int getV(int mask, int pos){
//    mask /= pw[pos];
//    return ( mask%base );
//}
//int setV(int mask, int v, int pos){
//    int rem = mask%pw[pos];
//    mask /= pw[pos+1];
//    mask = ( mask*base ) + v;
//    mask = ( mask*pw[pos] ) + rem;
//    return mask;
//}
/// <--------------------------- End B - Base Number System ----------------------------------->


// moves

int dx[]= {0,0,1,-1};/*4 side move*/
int dy[]= {-1,1,0,0};/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

//double Expo(double n, int p) {
//    if (p == 0)return 1;
//    double x = Expo(n, p >> 1);
//    x = (x * x);
//    return ((p & 1) ? (x * n) : x);
//}
#define __boost         ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MXN             100000+10
#define MXK             110
#define MXQ
#define SZE
#define MOD             1000000007

int cnt[MXN],vis[MXN],ara[MXN],situ;
ll dp[21][MXN];

ll ret,L,R;
ll cal(int st,int en)
{
   while(L>st){
    ret+=cnt[ara[L-1]];
    cnt[ara[L-1]]++;
    L--;
   }
   while(L<st){
    ret-=(cnt[ara[L]]-1);
    cnt[ara[L]]--;
    L++;
   }
   while(R<en){
    ret+=cnt[ara[R+1]];
    cnt[ara[R+1]]++;
    R++;
   }
   while(R>en){
    ret-=(cnt[ara[R]]-1);
    cnt[ara[R]]--;
    R--;
   }
   return ret;

}
void dp_func(int row,int st,int en,int l,int r)
{
    ll ans=0;
    if(st>en)return ;
    int mid=(st+en)/2;
    ll v=214748364788888888,best=l;
    situ++;
   // assert((mid-1)<=r);
    for(int i=l;i<=min(mid-1,r);i++){
        ll pk=dp[row-1][i]+cal(i+1,mid);
        if(pk<=v){
            v=pk;
            best=i;
        }
    }
   // return ;
    dp[row][mid]=v;
    if(st==en)return ;
    dp_func(row,st,mid-1,l,best);
    dp_func(row,mid+1,en,best,r);

}
int main()
{
    int i,j,k,l,m,n;

    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }
    situ++;
    for(int i=1;i<=n;i++){
        ret+=cnt[ara[i]];
        //len[i]=cnt[ara[i]];
        cnt[ara[i]]++;
        dp[1][i]=ret;
    }
  //  cout<<ret<<endl;
    L=1,R=n;

    for(int i=2;i<=k;i++){
        dp_func(i,1,n,0,n-1);
        //break;
    }
    printf("%lld\n",dp[k][n]);


}
