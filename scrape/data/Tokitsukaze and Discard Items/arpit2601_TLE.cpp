#include<bits/stdc++.h>
// #include<iostream>
using namespace std;
#define ll long long
#define fori(i,a,b) for(int i=a;i<=b;i++)
#define showpay(a) for(int i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl
#define showvector(a) for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}cout<<endl
const int mod = 1e9+7;
// const int num = 1e18+1;
//  ma.insert({a[i],i});
#define dec(n) cout<<fixed<<setprecision(n)
#define input(a) for(int i=0;i<n;i++){cin>>a[i];}

#define M_PI 3.14159265358979323846
const int N = 1e6+5;
#define fori(i,a,b) for(int i=a;i<=b;i++)
int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}
bool compare(ll i, ll j){ return i>j;}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    ll n,m,k;cin>>n>>m>>k;
    ll p[m];
    for(int i=0;i<m;i++){cin>>p[i];}

    int page=(p[0]-1)/k;
    int index=0,count=0,ans=0,off=0;
    while(true)
    {
        while(index<m && (p[index]-1-off)/k==page )
        {
            count++;
            index++;
        }
        ans++;
        if(index==m){break;}
        off=count;
        page=(p[index]-1-off)/k;
    }
    cout<<ans<<endl;

}