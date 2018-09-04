#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll bsearch(vector<ll> a, ll key, ll l, ll r)
{
    while(l <= r)
    {
        ll mid = r + (l - r ) / 2;
        if(a[mid] == key)
            return mid;
        else if(a[mid] > key)
            r = mid-1;
        else
            l = mid+1;

    }
    return max(l,r);
}
int main()
{
    ll n, m, i, x, prev;
    vector<ll> a;
    cin>>n;
    cin>>x;
    a.push_back(x);
    for(i = 1; i < n; i++)
    {
        cin>>x;
        x += a[i-1];
//      cout<<x;
        a.push_back(x);
    }
    cin>>m;
    ll l,r,mid,ans=-1;
    for(i = 0; i < m; i++)
    {
        cin>>x;
        l=0;
        r=a.size()-1;
        ans=-1;
        while(l <= r)
        {
            mid = r + (l - r ) / 2;
            if(a[mid] == x){
                ans=mid;
                break;
            }
            else if(a[mid] > x)
                r = mid-1;
            else
                l = mid+1;

        }
        if(ans==-1)
            ans = max(l,r);
        cout<<(ans + 1)<<endl;
    }



    return 0;
}