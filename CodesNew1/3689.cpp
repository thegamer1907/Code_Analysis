#include <bits/stdc++.h>
using namespace std;
int n,m,s,mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0,x;i<n;++i){
        cin>>x;
        mx = max(mx, x);
        s += x;
    }
    cout<<max(mx,static_cast<int>((s+m+n-1)/n))<<" "<<mx+m<<endl;
}