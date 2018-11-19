#include<bits/stdc++.h>

#define mod                          1000000007
#define lcm(a,b)                     (a*b)/__gcd(a,b)
#define ll                           long long
#define vll                          vector<ll>
#define pll                          vector< pair<ll,ll> >
#define pb                           push_back
#define mp                           make_pair
#define all(v)                       v.begin(),v.end()
#define rep(i,a,b)                   for(int i=a;i<b;i++)
using namespace std;
int main()
{ int i,j,n,k;
char st[3];
cin>>st;
cin>>n;

char s[n+1][3];
rep(i,0,n)
rep(j,0,2)
{cin>>s[i][j];
if(s[i][0]==st[0]&&s[i][1]==st[1])
    return cout<<"YES",0;
}
rep(i,0,n)
rep(j,0,n)
{
    if((s[i][1]==st[0]&&s[j][0]==st[1])||(s[i][0]==st[1]&&s[j][1]==st[0]))
     return cout<<"YES",0;
}
cout<<"NO";



return 0;

}


