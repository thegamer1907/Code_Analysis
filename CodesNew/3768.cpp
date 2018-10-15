#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main(){
    int n,m;
    cin>>n>>m;
    int i,j,l;
    int a[n];
    int mn=10000000,mx=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    int ans1,ans2;
    if(mn==mx){
        int d=m/n;
        if(d*n!=m) d++;
        
        ans1=mn+d;
        ans2=mx+m;
    }
    else{
        j=m;
        for(i=0;i<n;i++){
            j=j-(mx-a[i]);
        }
        if(j>0){
            int d=j/n;
            if(d*n!=j) d++;
        
            ans1=mx+d;
            ans2=mx+m;
        }
        else{
            ans1=mx;
            ans2=mx+m;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
    return 0;
}