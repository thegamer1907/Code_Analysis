#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define se second 
#define fi first
#define pb push_back
#define mp make_pair
#define db1(x) cout<<#x<<": "<<x<<"\n";
#define db2(x, y) cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<"\n";
#define db3(x, y, z) cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<"\n";
#define db4(a, b, c, d) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<"\n";
#define yash_kakarot ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
    yash_kakarot;
    int k;
    cin>>k;
    string s;
    cin>>s;
/*    if(k==0)
    {
        ll n=s.size();
        ll ans=n;
        ans=ans*(n+1);
        cout<<ans/2;
        return 0;
    }*/
    vector <int> v;
    v.pb(0);
    int n=s.size();
    for(int i=1;i<=n;i++)
    {
        v.pb(v[i-1]+(int)(s[i-1]-'0'));
    }
    int sub=0;
    ll ans=0;
    int key=k;
    for(int i=1;i<=n;i++)
    {
        auto it=lower_bound(v.begin()+i,v.end(),key);
        auto it2=upper_bound(v.begin()+i,v.end(),key);
     //   db4(it-v.begin(),*it,it2-v.begin(),*it2);  
        int in=it-v.begin();
        int in2=it2-v.begin();
    //    cout<<in2-in<<"\n"; 
        ans=ans+(ll)(in2-in);
        if(s[i-1]=='1')
            key++;
    }
    cout<<ans;
}