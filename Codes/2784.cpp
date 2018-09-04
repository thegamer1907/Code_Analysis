#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define ull unsigned long long int
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define pii pair<int , int>
#define pll pair<long long int,long long int>
#define mod 1000000007`
#define inf 1e18+7
#define eps 0.000001
#define endl '\n'  
inline ll build_lps(string s)
{
    ll l=0;
    ll m=s.length();
    ll lps[m]={0};
    bool lp[1000001]={0};
    lp[0]=1;
    ll i=1;
    while(i<m)
    {
        if(s[i]==s[l])
        {
            l++;
            lps[i]=l;
            i++;
        }
        else if(l!=0)
            l=lps[l-1];
        else
        {
            lps[i]=0;
            i++;
        }
    }
    for(i=0;i<m-1;i++)
    {
        lp[lps[i]]=1;
        //cout<<lps[i]<<endl;
    }
    //cout<<lps[i]<<endl;
    ll x=lps[m-1];
    while(lp[x]!=1)
    {
        x=lps[x-1];
    }
    return x;
}
int main()
{   
    fastio;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "rt", stdin);
        freopen("output.txt", "wt", stdout);
    #endif
    string s;
    cin>>s;
    ll x=build_lps(s);
    //cout<<x<<endl;
    if(x!=0)
    {
        for(ll i=0;i<x;i++)
            cout<<s[i];
    }
    else
        cout<<"Just a legend";
}