#include <iostream>
#include <bits/stdc++.h>
#define all(v) (v).begin,(v).end
typedef long long ll ;
using namespace std;
int n,k,a[101] ;
int main()
{
    cin>>n>>k ;
    int ans=0 ;
    for(int i=1 ; i<=n ; i++)
    {
        cin>>a[i];
    }
    for(int i=1 ; i<=n ; i++)
    {
        if(a[i]>=a[k] && a[i])ans++ ;
    }
    cout<<ans<<endl ;
}
