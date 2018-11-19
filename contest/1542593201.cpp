#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define F first
#define S second
#define pi 3.14159265359
#define EPS 1e-9
#define MOD 1000000007
void XsliferX(){ios::sync_with_stdio(0);ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);}
ll f_p(ll x,int y){if (y==0)return 1;else if (y%2==0)return f_p((x*x),y/2);else return (x*f_p((x*x),y/2));}
int dx[9]= {1,-1,0,0,1,-1,1,-1,0};
int dy[9]= {0,0,1,-1,1,-1,-1,1,0};

int main()
{
    XsliferX();
    string s,t;
    cin>>s;
    int n;cin>>n;
    bool f1=0,f2=0;
    for(int i=0 ; i<n ; i++)
    {
        cin>>t;
        if(t==s)return cout<<"YES",0;
        if(t[1]==s[0])f1=1;
        if(t[0]==s[1])f2=1;
    }
    if(f1&&f2)cout<<"YES";
    else cout<<"NO";
    return 0;
}
/*a=97  A=65
z=122 Z=90
0=48
*/
// for(int i=0 ; i<n ; i++)
//ll f_p(ll x,int y){if (y==0)return 1;else if (y%2==0)return f_p((x*x)%MOD,y/2);else return (x*f_p((x*x)%MOD,y/2))%MOD;}
//freopen("output.txt","w",stdout);
