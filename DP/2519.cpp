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
    int n,k;cin>>n;ll a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int c=1,ans=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1]){c++;}
        else{c=1;}
        ans=max(ans,c);
    }cout<<ans;
}
