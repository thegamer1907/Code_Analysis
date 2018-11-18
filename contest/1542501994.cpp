#include<bits/stdc++.h>
#define fast cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);cout<<fixed;cout<<setprecision(15);
#define ll long long
#define INF LONG_LONG_MAX
#define mod 1000000007

using namespace std;
double max(double a,double b)
{
    if(a>b) return a;
    return b;
}
double min(double a,double b)
{
    if(a<b) return a;
    return b;
}

ll modulo(ll a, ll b, ll n){
    long long x=1, y=a; 
    while (b > 0) {
        if (b%2 == 1) {
            x = (x*y) % n; // multiplying with base
        }
        y = (y*y) % n; // squaring the base
        b /= 2;
    }
    return x % n;
}

int main()
{
    fast
    string s;
    cin >> s;
    ll n;
    cin >> n;
    set<char>s1,s2;
    for(ll i=0;i<n;i++)
    {
        string temp;
        cin >> temp;
        if(s==temp)
        {
            cout<<"YES";
            return 0;
        }
        s1.insert(temp[0]);
        s2.insert(temp[1]);
    }
    if(s2.count(s[0]) && s1.count(s[1])) cout<<"YES";
    else cout<<"NO";
    return 0;    
}
