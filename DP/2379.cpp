#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define ff first
#define ss second
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;cin>>n>>k;ll a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int sum=0;
    for(int i=0;i<k;i++){sum+=a[i];}
    int ans=sum,ind=0;
    for(int i=k;i<n;i++)
    {
        sum+=a[i];
        sum-=a[i-k];
        if(ans>sum){ans=sum;ind=i-k+1;}
    }
    cout<<ind+1;
}
