#include<iostream>
#include<algorithm>
#include<cstring>
#include<iomanip>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<set>
#include<map>
#include<ctime>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#define ll long long int
#define INF 0x7fffffff
#define LIT 0x3f3f3f3f
#define mod 1000000007
#define me(a,b) memset(a,b,sizeof(a))
#define PI acos(-1.0)
//size_t npos=-1;
//ios::sync_with_stdio(0),cin.tie(0);
using namespace std;
const int N=1e4+5;
const int MXN=1e9;
//const ll N=1e18;

bool jug(ll x,ll n)
{
    ll sum=0;
    ll q=n;
    while(q){
        if(q<x){
            x=q;
            q=0;
        }
        else
            q-=x;
        sum+=x;
        q=q-q/10;
    }
    if(sum*2>=n)
        return true;
    return false;
}
int main()
{
    jug(2,68);
    ll n;
    cin>>n;
    ll l=1,r=n,mid;
    while(l<r){
        mid=(l+r)>>1;
        if(jug(mid,n))
            r=mid;
        else
            l=mid+1;
    }
    cout<<r<<endl;
}
