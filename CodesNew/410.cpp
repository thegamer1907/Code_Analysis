#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,t;
    cin>>n>>t;
    ll ar[n],sum=0;
    for(int i=0;i<n;i++)
    cin>>ar[i];
    int mx=0;
    int r=0;
    for(int i=0;i<n;i++)
    {
        //sum+=ar[l];
        while(r<n && sum+ar[r]<=t)
        {
            sum+=ar[r];
            r++;
        }
        mx=max(mx,r-i);
        sum-=ar[i];
    }
    cout<<mx<<endl;
    
}