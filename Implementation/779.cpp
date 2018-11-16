#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define mii  map<ll int,ll int>
#define msi  map<string,ll int>
#define mis  map<ll int, string>
#define rep(a,b)    for(ll int i=a;i<b;i++)
#define rep0(n)    for(ll int i=0;i<n;i++)
#define pb push_back
#define vi vector<ll int>
#define vs vector<string>
#define ppb pop_back
#define endl '\n'
#define asdf ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{   asdf
  int n,t;
  cin>>n>>t;
  string s;
  cin>>s;
    while(t--)
    {
        rep0(n-1)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }
    cout<<s;
}
