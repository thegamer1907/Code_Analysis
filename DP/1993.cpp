#include<bits/stdc++.h>
using namespace std;
#define fu(i,a,b) for (int i=a;i<=b;i++)
#define fd(i,a,b) for (int i=a;i>=b;i--)
long double res=0,xx=1;
map<int,bool> Map;
int tt[111111];
int a[111111],m,n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef LoveP
    freopen("home.inp","r",stdin);
    freopen("home.out","w",stdout);
    #endif
    cin >> n >> m;
    fu(i,1,n)
    {
        cin >> a[n-i+1];
    }
    fu(i,1,n)
    {
        tt[i]+=1-Map[a[i]]+tt[i-1];
        Map[a[i]]=1;
    }
    fu(i,1,m)
    {
        int q;
        cin >> q;
        cout << tt[n-q+1]<<"\n";
    }
}
