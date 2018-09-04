#include <bits/stdc++.h>

using namespace std;

#define s  second
#define  f first
#define ll long long


int main(){
    int n,d;
    cin>>n>>d;

    pair<int , int>  a[n+1];
    a[0].f=-1;
    a[0].s=0;

    for(int i=1; i<=n; i++){
        cin>>a[i].f>>a[i].s;
    }

    sort(a,a+n+1);

    long long int pre[n+1];
    pre[0]=0;
    
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1] + a[i].s;
    }
    
    ll ans = 0;
    for(int i=1,j=1; j<=n; j++){
        while(a[j].f-a[i].f >= d && i<j){
            i++;
        }
        ans = max(ans, pre[j]-pre[i-1]);
    }

    cout<<ans<<"\n";
}