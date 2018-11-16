#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sa=0,sb=0,sc=0;
    for (int i=1,a,b,c;i<=n;++i){
        cin>>a>>b>>c;
        sa+=a,sb+=b,sc+=c;
    }
    if (sa==0&&sb==0&&sc==0) cout<<"YES";
    else cout<<"NO";
}
