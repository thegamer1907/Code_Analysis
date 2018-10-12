#include<bits/stdc++.h>
using namespace std;
typedef long l;
typedef long long ll;
typedef unsigned long long ull;
#define sc(a) scanf("%d,&a")
const int MAX=1e5+55;
const ll inf=2*1e9+77;
const int MOD=1e8+7;
int a[MAX];
int n;
bool cheak(ll d){
    ll hold=d;
    for( int i=0;i<n;++i){
        hold-=(d-a[i]);
        if(hold<=0)
        return 1;
    }
    return 0;
}
int main(){
    cin>>n;
    for(int i=0;i<n;++i)
    cin>>a[i];
    sort(a,a+n,greater<int>());
    ll st=a[0],en=inf;
    ll res=0;
    while(st<=en){
        ll md=(st+en)/2;
        if(cheak(md)){
            res=md;
            en=md-1;
        }
        else
            st=md+1;
        
    }
    
 cout<<res;
 return 0;
    
    
    
    
    
}