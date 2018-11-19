#include<bits/stdc++.h>
using namespace std;
int a,s,d[1000],f,g,h,j,k,l,i,n,m;
main(){
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(a=0;a<m;a++){
            cin>>j;
            k+=(1<<a)*j;
        }
        d[k]=1;
        k=0;
    }
    if(d[0]) {cout<<"YeS";return 0;}
    for(i=1;i<(1<<m);i++){
        for(a=1;a<(1<<m);a++){
            if(d[i] && d[a] && (i&a)==0) {cout<<"Yes";return 0;}
        }
    }
    cout<<"No";
}
