#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    for (int i=1,a,b;i<=n;++i){
        cin>>a>>b;
        if (b-a>=2) cnt++;
    }
    cout<<cnt;
}
