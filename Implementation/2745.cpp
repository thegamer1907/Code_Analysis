#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define mod 1000000007

ll gcd(ll aa,ll bb) { if(aa==0) return bb; return(bb%aa,aa); }


int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string s;
    string s1;
    
    cin>>s>>s1;
    
    reverse(s.begin(),s.end());
    
    if(s==s1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}
