#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&a, int n)
{
    vector<int>b;
    int res = 0;
    for(int i=0; i<n; i++){res+=a[i];int x = 1-2*a[i];b.push_back(x);}
    int cur = 0;
    int mx = -1;
    for(int i=0; i<n; i++)
    {
        cur = max(cur+b[i], b[i]);
        mx = max(mx, cur);
    }
    //cout<<"mx "<<mx<<endl;
    return res+mx;
}

int main() 
{
    int t;
    //cin>>t;
    t = 1;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a(n, 0);
        for(int i=0; i<n; i++)cin>>a[i];
        int res = solve(a, n);
        cout<<res<<endl;
    }
    return 0;
}

