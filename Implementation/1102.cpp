#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 10000000000000007;

void solve()
{
    string s;
    ll n,x,y,mx=INT_MIN,i=0,j=0,w,k=0,f=1,ans=0,one=0,half=0;
    cin>>n>>x>>s;
    
    while(x--)
    {
        for(i=0;i<n-1;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
}
int main()
{
    //ios_base :: sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    ll t;
    //seive();
   // cin>>t;
    
   // while(t--)
        solve();   
   //string s1(0,'a'),s2="abc";
    //s2.insert(0,s1);
    //cout<<s1;
   // string a(10,'a');
    //cout<<a;
        
}