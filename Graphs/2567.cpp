#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
void READ(){
#define R READ();
#define INFI 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3f
#define mem0(x) memset(x,0,sizeof(x))
#define prln(x) cout<<#x<<"="<<x<<endl;
#ifndef ONLINE_JUDGE
    freopen("A.in","r",stdin);
#endif
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(11);
}
///////////////////////////
const int N=5+1e4;
int n,m;
int p[N],c[N],ma,ans;
int main()
{
    R
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        cin>>p[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
    }
    for(int i=2;i<=n;i++)
    {
        if(c[i]!=c[p[i]])ans++;
    }
    cout<<ans+1;
    return 0;
}
