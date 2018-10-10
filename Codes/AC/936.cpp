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
#define ll long long
#define ss second
#define ff first
using namespace std;
ll n,m,x,p,y,k,a[100100];
string s;
bool ch(ll xx){
    for(int i=xx;i<=n;i++){
        p=a[i]-a[i-xx];
        if(p+k>=xx || p-k<=0)return true;
    }
    return false;
}
ll bi(ll xx,ll yy){
    ll mm=(xx+yy)/2;
    if(yy-xx<=1)return xx;
    if(ch(mm))return bi(mm,yy);
    else return bi(xx,mm);
}
int main(){
    cin>>n>>k>>s;
    if(s[0]=='a')a[1]++;
    for(int i=1;i<n;i++){
        a[i+1]=a[i];
        if(s[i]=='a')a[i+1]++;
    }
    x=bi(0,n+1);
    cout<<x;
    return 0;
}
