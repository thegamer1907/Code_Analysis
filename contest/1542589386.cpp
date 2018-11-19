#include<bits/stdc++.h>
using namespace std;
#define vi vector < long long >
#define pii pair < int , int >
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long
#define llu unsigned long long
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define all(x) x.begin(),x.end()
#define mset(x,v) memset(x, v, sizeof(x))
#define sz(x) (int)x.size()
#define fr(i, p, n) for(int i = (int )p; i < (int )n; i++)
#define rev(i, n, p) for(int i = (int )n; i >= (int )p; i--)
#define MAX 100005

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
   string str;
   cin>>str;
   
   ll n;
   cin>>n;
   
   string a;
   
   vector<string> v;
   for(ll i=0;i<n;i++)
   {
       cin>>a;
       v.pb(a);
   }
   ll flag=0;
   for(ll i=0;i<n;i++)
   {
       for(ll j=0;j<n;j++)
       {
           string t=v[i]+v[j];
           if(t.find(str)!=string::npos)
           {
               flag=1;
           }
       }
   }
   
   if(flag==1)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
   
    return 0;
}
