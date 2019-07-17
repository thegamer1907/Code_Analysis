#include <bits/stdc++.h>
using namespace std;
unsigned long long n,m,k,w[100001];
int main(){
    unsigned long long i,p=0,rest,now=0,ans=0;
    cin>>n>>m>>k;
    rest=k;
    if(rest==0){cout<<ans;return 0;}
    for(i=0;i<m;i++)cin>>w[i];
    if((w[now]-p)>k)k=(((w[now]-1-p)/rest)*rest)+rest;
    //cout<<k<<endl;
    while(1){
        //if(now>=m)break;
        int tmp=0;
        if(w[now]-p>k)k=(((w[now]-1-p)/rest)*rest)+rest;
        while(w[now]-p<=k){
            tmp++;
            now++;
            //cout<<now<<" ";
            if(now>=m){ans+=1;break;}
        }
        if(now>=m)break;
        p+=tmp;
        ans++;
    }
    cout<<ans;
return 0;
}