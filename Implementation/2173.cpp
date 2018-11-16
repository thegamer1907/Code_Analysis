
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define vpb(i) v.push_back(i)
#define ntq(z)  long long int z; cin>>z; for(long long int i=0;i<z;i++)
#define f(x9,y9) for(long long int i=x9;i<y9;i++)

void printprecise(double l,ll precision)
{
    std::cout << std::fixed;
    std::cout << std::setprecision(precision);
    std::cout << l;
}
ll maxa(ll a,ll b,ll c)
{
    map <ll,ll> m;
    m[a]++;
    m[b]++;
    m[c]++;
    return m[2];
}
int main()

{
   
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
    #ifndef ONLINE_JUDGE    
    freopen("input.txt", "r", stdin);    
    freopen("output.txt", "w", stdout);
    #endif
    
    ll n,x=0,y=0,z=0,a,b,c;
    cin>>n;
    f(0,n)
    {
      cin>>a>>b>>c;
      x+=a;
      y+=b;
      z+=c;      
    }
    if(x==0&&y==0&&z==0)
      cout<<"YES";
    else
      cout<<"NO";

return 0;
}