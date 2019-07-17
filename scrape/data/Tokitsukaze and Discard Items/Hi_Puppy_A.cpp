#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int xxx=1;
    for(int i = 0; i < 100000; i++)xxx++;
    ll n,m,k;
    scanf("%lld%lld%lld",&n,&m,&k);
    queue<ll>q;
    for(int i=0;i<m;i++){
        ll x;
        scanf("%lld",&x);
        q.push(x);
    }
    ll r=k,cnt=0,t=0;
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
    cout<<cnt<<endl;
    return 0;
}