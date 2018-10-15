#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int m;cin>>m;
    int s=m;
    int mks=0;
    for(int i = 0,a ; i < n ; i ++){
        cin>>a;
        s+=a;
        mks=max(mks,a);
    }
    cout<<max((s+n-1)/n,mks)<<" "<<mks+m;
}
