#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int maxn=2e5+5;

bool cmp(int a,int b)
{
    return a>b;
}
ll ma[maxn];
vector<ll> v;
int main()
{
    ll n,m,k,d;

    scanf("%lld%lld%lld",&n,&m,&k);
    for(int i=0;i<m;i++)
    {
        scanf("%lld",&d);//v.push_back(d);
        ma[i]=d;
    }
    int flag=0;
    ll sum=0,res=0,ans=0;
    ll now=k;
    if(ma[0]>k) {
        if(ma[0]%k==0) {now=ma[0];}
        else {
            now=(ma[0]/k+1)*k;
        }
    }

    for(int i=0;i<m;){
        if((ma[i]-res)<=now) {flag=1;ans++;i++;}
        else {
            res=ans;
            if((ma[i]-res)>now) {
                  if((ma[i]-res)%k==0) {now=ma[i]-res;}
                  else {
                      now=((ma[i]-res)/k+1)*k;
                  }
            }
            if(flag) {sum++;flag=0;}
        }
    }
    cout<<sum+1<<endl;
    return 0;
}