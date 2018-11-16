#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    LL a,b;
    cin>>a>>b;
    LL ar[a];
    for(LL i=0;i<a-1;i++){
        cin>>ar[i];
    }
    bool lock[a];
    memset(lock,false,sizeof(lock));
    for(LL i=0;i<a-1;i++){
        LL val=(i+1)+ar[i];
        lock[val]=true;
        i+=(ar[i]-1);
    }
    if(lock[b]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
