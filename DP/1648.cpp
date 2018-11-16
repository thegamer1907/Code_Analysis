// KHAz
#include<bits/stdc++.h>
#define maxn
#define F first
#define S second
#define PB push_back
#define mp make_pair
#define reset(x) memset(x,0,sizeof(x))
#define Task ""
#define oo 999999999999
using namespace std;
string s;
int n;
long long maax1=oo,maax2=oo;
int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);cout.tie(0);
   // freopen(Task".inp","r",stdin);
//    freopen(Task".out","w",stdout);
    cin>>s;
    n=s.length();
    s=' '+s;
    for(int i=1;i<n;i++)
    {
       string v=s.substr(i,2);
       if(v=="BA")
       {
           maax2=min(maax2,1ll*i*2+1);
           if(maax1!=oo&&1ll*i*2+1-maax1>2) {cout<<"YES"; return 0;}
       }
       if(v=="AB")
       {
           maax1=min(maax1,1ll*i*2+1);
           if(maax2!=oo&&1ll*i*2+1-maax2>2) {cout<<"YES";return 0;}
       }
    }
    cout<<"NO";

}
