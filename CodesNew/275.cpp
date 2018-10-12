#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5+55;
const int inf=1e7+77;
int n,t;
int x[MAX];
int cs[MAX];
bool cheak(int d){
    if(cs[d-1]<=t)
    return 1;
    for(int i=d;i<n;++i){
        if(cs[i]-cs[i-d]<=t)
        return 1;
    }
    return 0;
}
int main(){
    cin>>n>>t;
    for(int i=0;i<n;++i)
    cin>>x[i];
    cs[0]=x[0];
    for(int i=1;i<n;++i)
    cs[i]=cs[i-1]+x[i];
    int st=0,en=n;
    int res;
    while(st<=en){
        int md=(st+en)>>1;
        if(cheak(md)){
            st=md+1;
            res=md;
        }
        else
        en=md-1;
    }
    cout<<res;
    return 0;
    
    
    
    
    
    
    
    
    
    
}