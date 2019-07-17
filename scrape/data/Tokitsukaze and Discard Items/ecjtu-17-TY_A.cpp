#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>
#include<cmath>
#include<stack>
#include<map>
#include<set>
using namespace std;
#define LL long long
const int MOD=1e9+7;
const int inf=0x3f3f3f3f;
const LL inff=0x3f3f3f3f3f3f3f3f;
const LL N=205;
const LL M=5005;
const double pi=acos(-1);
#define MEF(x) memset(x,-1,sizeof(x))
#define ME0(x) memset(x,0,sizeof(x))
#define MEI(x) memset(x,inf,sizeof(x))
LL al[100005];
int main()
{
    LL n,m,k,l,r,ans=0;
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)
    {
        cin>>al[i];
    }
    l=1;r=k;
    for(int i=1;i<=m;)
    {
        int sum=0;
        while(al[i]>=l&&al[i]<=r)
        {
            i++;
            sum++;
        }
        //cout<<l<<' '<<r<<' '<<sum<<endl;
        if(sum==0)
        {
            LL ll=((al[i]-l)/k*k);
            l+=ll;
            r+=ll;
        }
        else
        {
            ans++;
            l+=sum;
            r+=sum;
        }
    }
    cout<<ans<<endl;
    return 0;
}