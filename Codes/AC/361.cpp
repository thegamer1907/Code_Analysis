#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// ll bsearch(vector<ll> a, ll key, ll l, ll r)
// {
//     while(l <= r)
//     {
//         ll mid = r + (l - r ) / 2;
//         if(a[mid] == key || (mid - 1 >= l && a[mid - 1] < key && a[mid] > key) || (mid == l && key < a[mid] ))
//             return mid;
//         if(a[mid] > key)
//             r = mid-1;
//         else
//             l = mid+1;

//     }
//     return -1;

// }
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
    for(i = 0; i < m; i++)
    {
        cin>>x;
        auto it=lower_bound(a.begin(),a.end(),x);
        int pos=it-a.begin();
         cout<<pos+1<<endl;
        // if(a[pos]>x)
        //     pos--;
        // cout<<pos+1<<endl;
    }



    return 0;
}