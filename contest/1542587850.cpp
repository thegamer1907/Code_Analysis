#include <bits/stdc++.h>
#define ill int long long
#define pb push_back
#define fi first
#define se second
using namespace std;
ill h,m,s,x,y,x2,y2;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    cin>>h>>m>>s>>x>>y;
    h=30*h;
    h%=360;
    m=6*m;
    m%=360;
    s=6*s;
    s%=360;
    x=30*x;
    x%=360;
    y=30*y;
    y%=360;
    //cout<<h<<" "<<m<<" "<<s<<" "<<x<<" "<<y<<endl;
    x2=x;
    y2=y;
    while (x!=y && x!=m && x!=s && x!=h)
    {
        x++;
        x%=360;
    }
    if (x==y){cout<<"YES";return 0;}
    while (y2!=x2 && y2!=m && y2!=s && y2!=h)
    {
        y2++;
        y2%=360;
    }
    if (x2==y2){cout<<"YES";return 0;}
    cout<<"NO";
}
