#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,k;
    for(int i=0;i<1000000;i++);
    scanf("%lld%lld%lld",&n,&m,&k);
    for(int i=0;i<1000000;i++);
    queue<ll>q;
    for(int i=0;i<1000000;i++);
    for(int i=0;i<m;i++){
        ll x;
        scanf("%lld",&x);
        q.push(x);
    }
    for(int i=0;i<1000000;i++);
    ll r=k,cnt=0,t=0;
    for(int i=0;i<1000000;i++);
    while(!q.empty()){
        t=0;
        while(!q.empty()&&q.front()<=r){
            t++; q.pop();
        }
        if(t==0){
            ll v=0;
            if(!q.empty()){
                if((q.front() - r)%k==0)    v=(q.front() - r)/k;
                else v=(q.front() - r)/k+1;
            }
            r+=k*v;   continue;
        }
        r+=t;cnt++;
    }
    for(int i=0;i<1000000;i++);
    cout<<cnt<<endl;
    for(int i=0;i<1000000;i++);
    return 0;
}