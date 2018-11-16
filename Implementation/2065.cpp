#include <bits/stdc++.h>
#define opt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define forw(i,a,b) for(int i=a;i<b;i++) 
#define forb(i,a,b) for(int i=b;i>=a;i--) 
#define ull unsigned long long 
#define ll long long 
#define vll vector<long long> 
#define vii vector<int> 
#define mod 1000000007
#define mod2 1000000009
#define pb push_back
#define ff first
#define ss second
// I might be a loser, but I have nothing to lose :p
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long x,y,z;
    long long sumx=0,sumy=0,sumz=0;
    while(n--)
    {
        cin>>x>>y>>z;
        sumx=sumx+x;
        sumy=sumy+y;
        sumz=sumz+z;
    }
    cerr<<"sum x is "<<sumx<<endl;
    cerr<<"sum y is "<<sumy<<endl;
    cerr<<"sum z is "<<sumz<<endl;
    if(!sumx && !sumy && !sumz )
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}


