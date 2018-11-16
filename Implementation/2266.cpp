#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define endl "\n"
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define hell 100001

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k,n,w,s;
    cin>>k>>w>>n;
    s=k*n*(n+1)/2;
    if(s<=w)
        cout<<0;
    else
        cout<<s-w;
    return 0;
}
