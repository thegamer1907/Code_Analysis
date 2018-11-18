#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>

using namespace std;


#define endl "\n"
#define ll long long int
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb pop_back
#define pb push_back
#define F first
#define S second



int main()
{
    string s;
    cin >> s;
    ll n;
    cin >> n;
    vector<char> a,b;
    char x;
    for(ll i=0;i<n;i++){
        cin >> x;
        a.pb(x);
        cin >> x;
        b.pb(x);
    }
    
    
    for(ll i=0;i<n;i++){
        if(a[i]==s[0] && b[i]==s[1]){
            cout << "YES";
            return 0;
        }
        
    }
    
    for(ll i=0;i<n;i++){
        if(b[i]==s[0]){
            for(ll i=0;i<n;i++){
                if(a[i]==s[1]){
                    cout << "YES";
                    return 0;
                }
            }
        }
        
    }
    cout << "NO";
    
}