#include<bits/stdc++.h>
using namespace std;
int n,nol,satu,ans,maks=-1,m,x;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin>>x;
        ans+=x;
        satu+=1-x*2;
        maks=max(maks,satu-m);
        m=min(satu,m);
    }
    cout<<maks+ans;
}
/*
18
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
*/
