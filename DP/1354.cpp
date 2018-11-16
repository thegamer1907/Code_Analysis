//
//  main.cpp
//  Flipping Game (Alternate)
//
//  Created by SRIJAN SONI on 18/08/18.
//  Copyright © 2018 SRIJAN SONI. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define pb push_back
#define eb emblace_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long
#define PI 3.14159265359
#define msy(x,y) memset(x,y,sizeof(x))
#define ms0(x) memset(x,0,sizeof(x))
#define ms1(x) memset(x,-1,sizeof(x))
#define vl vector<long long>
#define vi vector<int>
#define vii vector< vector<int> >
#define vll vector< vector<long long> >
#define vpi vector< pair<int,int> >
#define vpl vector< pair<ll,ll> >
#define viii vector< vector<vector<int> > >
#define msi map<string,int>
#define si set<int>
#define nl cout<<endl
#define mod 1000000007
#define trvi(c,it) for(vi::iterator it=(c).begin();it!=(c).end();it++)
#define trvii(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)
#define trmsi(c,it) for(msi::iterator it=(c).begin();it!=(c).end();it++)
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
const int N=1e6+5;
int a[N];
int b[N];
int maxsum(int n)
{
    int max_so_far=b[0];
    int current_max=b[0];
    for(int i=1;i<n;i++)
    {
        current_max=max(b[i],current_max+b[i]);
        max_so_far=max(max_so_far,current_max);
    }
    return max_so_far;
}
int main(int argc, const char * argv[])
{
    IOS;
    //    #ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    //    #endif
    
    int n;
    cin>>n;
    ms0(b);
    int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            b[i]=-1;
            s++;
        }
        else
            b[i]=1;
    }
    int ans= maxsum(n);
    if(s==n)
    {
        cout<<n-1<<endl;
        return 0;
    }
    if(s==0)
    {
        cout<<n<<endl;
        return 0;
    }
    cout<<s+ans<<endl;
    return 0;
}
