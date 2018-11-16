#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define rr return 0
int main()
{
    ll n,t; cin>>n>>t;
    string s; cin>>s;
    ll l=s.size();
    for (ll i=0;i<t; i++)
    {
        ll j=0;
        while (j<l-1)
        {
            if (s[j]<s[j+1])
            {
                swap(s[j],s[j+1]);
                j+=2;
            }
            else j++;    
        }
    }
    cout<<s;
	rr;
}