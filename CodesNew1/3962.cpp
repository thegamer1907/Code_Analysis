#include <bits/stdc++.h>

using namespace std;

long long s,b,q,p,k,pp,l;
long long g[201000];
long long h[201000];

int main(){
    cin>>b>>q;
    cin>>g[0];
    for (int i=1;i<b;i++){
        cin>>l;
        g[i]=g[i-1]+l;
    }
    k=0;
    for (int i=0;i<q;i++){
        cin>>h[i];
        k+=h[i];
        p=upper_bound(g,g+b,k)-g;
        if (p==b){
            p=k=0;
        }
        cout<<b-p<<endl;
    }
    return 0;
}
