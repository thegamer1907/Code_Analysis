//test_ speed _code
/*
Various :)))))
CF handel:N.Asghari
vjudge:N_Asghari
???????
|||||
:))	    @  @    :))
----
*/
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<sstream>
#include<set>
#include<cstdio>
#include<stdio.h>
#include<string.h>

#define rep(i,a,n)  for(int i=a;i<n;i++)
#define repp(i,a,n)  for(ll i=a;i<n;i++)
#define ripp(i,a,n)  for(ll i=a;i<=n;i++)
#define RP(c,d)     for(int i=c;i<=d;i++)
#define pii    pair<long long,long long>
#define piii   pair<ll,pii>
#define pb    push_back
#define MP   make_pair
#define MAX  100000
#define sf    scanf
#define pf   printf
#define Test 		freopen("a.in","r",stdin);
#define Testout 	freopen("a.out","w",stdout);

typedef long long ll;

using namespace std;
int main(){
       //freopen("a.in", "r", stdin);
int n,m,s=0,b[MAX],a[MAX];
cin>>n;
rep(i,0,n){
    cin>>a[i];
}
sort(a,a+n);
cin>>m;
rep(i,0,m){
    cin>>b[i];
}
sort(b,b+m);
rep(i,0,n){
    rep(j,0,m){
if(abs(a[i]-b[j])<=1){
        b[j]=1000;
    s++;
    break;
}
}
}

cout<<s<<endl;
return 0;
}
