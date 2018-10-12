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
int  dir_r[] = { 1, -1,  0,  0, 1,  1, -1, -1 };
int  dir_c[] = { 0,  0,  1, -1, 1, -1,  1, -1 };
int n,a[100001];
bool ok(ll md){
    ll s=0;
    for(int i=0;i<n;i++){
        s+=md-a[i];
        if(a[i]>md)
            return 0;
    }
    return s>=md;
}
int main()
{
    Compiler_Beso
    
   cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll l=0,r=3e9,ans=1e18+9;
    while (l<=r) {
        ll mid=(l+r)/2;
        if(ok(mid)){
            ans=min(ans,mid);
            r=mid-1;
        }
        else
            l=mid+1;
    }
    cout<<ans;
    
    return 0;
}











