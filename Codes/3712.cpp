#include<bits/stdc++.h>

#define   db(x)         printf("**%d\n",x)
#define   pb            push_back
#define   pii           pair<int,int>
#define   m0d           1000000007
#define   mm(x,y)       memset(x,y,sizeof(x))
#define   fs            first
#define   sc            second

using namespace std;
typedef long long ll;
typedef double dbl;

long long ans,pb,ps,pc,nb,ns,nc,taka,rb,rc,rs;

int check(ll koyta)
{
    ll xb=max(0ll,(koyta*rb)-nb);
    ll xs=max(0ll,(koyta*rs)-ns);
    ll xc=max(0ll,(koyta*rc)-nc);
    ll cost = (xb*pb)+(xs*ps)+(xc*pc);
    if(cost<= taka) return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='B') rb++;
        else if(s[i]=='S') rs++;
        else rc++;
    }
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>taka;
    ll lo=0,hi=1e13;
    while(hi>=lo){
        ll mid=(lo+hi)/2ll;
        if(check(mid)){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}
/*sample

*/

