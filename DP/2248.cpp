#include <bits/stdc++.h>
#define zero NULL
#define FF first
#define SS second
#define MOD 1000000007
#define pb push_back    
#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#define MOD 1000000007
#define upperlimit 1000001001
#define epsilon 1e-11
#define TEMP 10000001
#define nil 0
#define DEV 1e11
#define debug 1e3
#define PRIMESCHECK 11111111
using namespace std;
typedef long long ll;
 void SieveOfErat()   //prec of eratosthenes
{
    
    bool prime[1000001];
    memset(prime, true, sizeof(prime));
 
    for (long long vec=2; vec*vec<=1000000; vec++)
    {
        
        if (prime[vec] == true)
        {
            
            for (long long dd=vec*2; dd<=1000000; dd += vec)
                prime[dd] = false;
        }
    }
}
ll gcd(ll aa,ll id2)
{
    if(aa==0)
    {
        return id2;
        
    }
    else
    return gcd(aa%id2,id2);
}
struct vect
{   struct vect *foll; 
    ll calc;
    struct vect *succ;
    
};
set<int>st;
int ans[500000];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif  

 int n,m,arr[500000],x;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   for(int i=n-1;i>=0;i--)
   {
        st.insert(arr[i]);
        ans[i]=st.size();
    }
    while(m--)
    {
        cin>>x;
        cout<<ans[x-1]<<endl;
    }

    return 0;
}
