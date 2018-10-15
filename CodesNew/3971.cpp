#include <bits/stdc++.h>
/*
 **
 Success doesn't come to you ,
 You Go To IT .
 **
 */
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define finish(x) return cout << x << endl, 0;
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;


ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }


enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };


int main()
{
    Compiler_Beso
    
    
    int n,m;
    cin>>n>>m;
    vector<ll>sav(n+1);
    for (int i=1; i<=n; i++) {
        int x; cin>>x;
        sav[i]=sav[i-1]+x;
    }
    ll prev=0;
    while (m--) {
        ll k;
        cin>>k;
        k+=prev;
        auto up=upper_bound(sav.begin(), sav.end(),k);
        int indx=up-sav.begin();
        if(indx==n+1){
            cout<<n<<endl;
            prev=0;
        }
        else{
            cout<<(n+1)-indx<<endl;
            prev=k;
        }
        
    }
  ///  
    
    
    
    
    return 0;
}










