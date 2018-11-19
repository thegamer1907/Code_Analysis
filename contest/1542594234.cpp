#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string p,s;
    cin>>p;
    int n;
    cin>>n;
    map<char,ll> st,en;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        st[s[0]]=1;
        en[s[1]]=1;
        if(s==p)
        {
            cout<<"YES";
            return 0;
        }
    }
    if(en[p[0]] && st[p[1]])
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
