#include <bits/stdc++.h>
using namespace std;
#define maxn 100000+5
typedef long long int ll;
ll  a[maxn];
int main(){
    ll n,k;int m;
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++){
        scanf("%lld",&a[i]);
    }
    ll tmp=0;
    int i=1,ans=0;ll tmpk=k;
    while(i<=m){
        int flag=0;tmp+=tmpk;
        while(a[i]<=tmp&&i<=m)flag++,i++;
        if(flag){
            tmp+=flag;
            ans++;
            tmpk=0;
        }else {
            tmpk=(a[i]-tmp)/k*k;
        
        }
    }
    cout<<ans<<endl;
}