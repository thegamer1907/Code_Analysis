#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxn 100005
ll n,m,k,t;
ll a[maxn];
int main(){
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)
        cin>>a[i];
    ll now=(a[1]-1)/k+1,temp=1,tt=t=0,flag=1;
    for(int i=1;i<=m;i++){
        if(now*k>=a[i]-t){
            tt++;
            flag=0;
        }
        else if(flag==0){
            temp++;
            t=tt;
            i--;
            flag=1;
            continue;
        }
        if(flag){
            now++;
            i--;
        }
    }
    cout<<temp<<endl;
}