#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define ll long long
const ll INF=1e13+5;
int main()
{
    char ss[105];
    ll b=0,s=0,c=0;
    ll nb,ns,nc;
    ll pb,ps,pc;
    ll m;
    cin>>ss;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>m;
    for(int i=0;i<strlen(ss);i++)
    {
        if(ss[i]=='B')b++;
        else if(ss[i]=='S')s++;
        else if(ss[i]=='C')c++;
    }
    ll l=0,r=INF;
    ll mid;
	while(r-l>1)
    {
        mid=(l+r)/2;
        ll cost=0;
        if((b*mid-nb)>0)cost+=(b*mid-nb)*pb;
        if((s*mid-ns)>0)cost+=(s*mid-ns)*ps;
        if((c*mid-nc)>0)cost+=(c*mid-nc)*pc;
        if(cost<=m)l=mid;
        else r=mid;
    }
    cout<<l<<endl;
    return 0;
}