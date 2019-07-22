#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,k,i,ans=0,x,tmp=0,prev;
    cin>>n>>m>>k;
    long long int A[m];
    for(i=0;i<m;i++)
        cin>>A[i];
    x=(A[0]-1)/k;
    x*=k;
    prev=0;
    x+=k;
    for(i=0;i<m;i++){
        tmp=0;
        while(i<m && A[i]-prev<x+1){
            // cout<<A[i]<<" ";
            i++;
            tmp++;
        }
        i--;
        prev=tmp;
        x=(A[i]-tmp-1)/k;
        x*=k;
        x+=k;
        // cout<<"\n";
        // cerr<<x<<"\n";
        ans++;
    }
    cout<<ans;
    return 0;
}