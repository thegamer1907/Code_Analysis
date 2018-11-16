#include<bits/stdc++.h>
using namespace std;
#define fu(i,a,b) for (int i=a;i<=b;i++)
#define fd(i,a,b) for (int i=a;i>=b;i--)
int a,b,c,_a,_b,_c;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef LoveP
    freopen("home.inp","r",stdin);
    freopen("home.out","w",stdout);
    #endif
    cin >> a;
    while (cin >> a >> b >> c)
    {
        _a+=a;
        _b+=b;
        _c+=c;
    }
    if (!_c&&!_b&&!_a) cout << "YES";
    else cout << "NO";
}
