#include <bits/stdc++.h>
using namespace std;
long long n,m,k,w[10001];
int main(){
    long long i,p=0,rest,now=0,ans=0;
    cin>>n>>m>>k;
    rest=k;
    for(i=0;i<m;i++)cin>>w[i];
    if(w[now]-p>k)k+=((w[now]-p)/k)*rest;
    //cout<<k<<endl;
    while(1){
        int tmp=0;
        if(w[now]-p>k)k+=rest;
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