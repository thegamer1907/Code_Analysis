#include <bits/stdc++.h>

using namespace std;
long long n,k,i,LEF,RIG,cnt[100010],a[100010],dyn[22][100010];
long long ret;
void slide(int lef,int rig)
{
    while(RIG<rig)
    {
        RIG++;
        ret+=cnt[a[RIG]];
        cnt[a[RIG]]++;
    }
    while(RIG>rig)
    {
        cnt[a[RIG]]--;
        ret-=cnt[a[RIG]];
        RIG--;
    }
    while(LEF<lef)
    {
        cnt[a[LEF]]--;
        ret-=cnt[a[LEF]];
        LEF++;
    }
    while(LEF>lef)
    {
        LEF--;
        ret+=cnt[a[LEF]];
        cnt[a[LEF]]++;
    }
}
void solve(int lf,int rg,int lo,int hi,int k)
{
    if(hi<lo)return ;
    int newmi=lf,mi=(lo+hi)/2;
    for(int i=lf;(i<=rg)&&(i<mi);i++)
    {
        slide(i+1,mi);
        if(dyn[k-1][i]+ret<dyn[k][mi])
        {
            newmi=i;
            dyn[k][mi]=dyn[k-1][i]+ret;
        }
    }
    if(hi==lo)return ;
    solve(lf,newmi,lo,mi-1,k);
    solve(newmi,rg,mi+1,hi,k);
}
int main()
{
    cin>>n>>k;
    memset(dyn,127,sizeof(dyn));
    dyn[1][0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        dyn[1][i]=dyn[1][i-1]+cnt[a[i]];
        cnt[a[i]]++;
    }memset(cnt,0,sizeof(cnt));
    LEF=RIG=1;cnt[a[1]]=1;
    for(i=2;i<=k;i++)
        solve(1,n,1,n,i);
    cout<<dyn[k][n];
    return 0;
}
