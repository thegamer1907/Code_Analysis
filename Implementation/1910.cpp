#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    string s;
    ll n,x,y,mx=INT_MIN,i=0,j=0,k=0,f=1,ans=0,one=0,half=0;
    cin>>n;
    vector<vector<ll >>v(n,vector<ll>(3));
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>v[i][j];
        }
    }
    
    for(i=0;i<3;i++)
    {
        x=0;
        for(j=0;j<n;j++)
        {
            x+=v[j][i];
        }
        if(x!=0)
        {
            cout<<"NO";return;
        }
    }
    cout<<"YES";
}
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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