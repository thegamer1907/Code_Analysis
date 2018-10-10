//HASHEMESHOON hastam ;)
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cstdio>
#include <map>
#include <string>
#include <set>
#include <vector>
#include <stack>
#include <deque>
#include <queue>
#include <ctime>
#include <iterator>
#define ll long long
#define ss second
#define ff first
using namespace std;
ll n,m,x,y,w,z,d,h[1000000];
pair <ll,ll> a[1000000];
ll bs(ll f,ll l,ll xx){
    ll mi=(f+l)/2;
    if(l-f<=1)return f;
    if(xx+d>a[mi].ff)return bs(mi,l,xx);
    return bs(f,mi,xx);
}
int main(){
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>a[i].ff>>a[i].ss;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        h[i]=a[i].ss;
        if(i)h[i]+=h[i-1];
    }
    for(int i=0;i<n;i++){
        x=bs(0,n,a[i].ff);
        m=max(m,h[x]-(i>0)*h[i-1]);
    }
    cout<<m;
    return 0;
}
