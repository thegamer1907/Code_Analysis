#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define ff first
#define ss second
using namespace std;

// Important header files
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;cin>>n>>k;int a[n];for(int i=0;i<n;i++){cin>>a[i];}
    set<int> s;int ans[n]={0};
    for(int i=n-1;i>=0;i--){s.insert(a[i]);ans[i]=s.size();}
    while(k--)
    {
        int x;cin>>x;
        x--;
        cout<<ans[x]<<endl;
    }
}
