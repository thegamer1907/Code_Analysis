#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll,ll>
using namespace std;

int n,ai;
ll s;
vector<int> vec,ans;
ii check(int k)
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    vector<ll> temp;
    ii ret;
    ret.first = k;
    for (int i = 1 ; i<= n ; i++)
    {
        temp.push_back(vec[i] + (ll)i*k);
    }
    sort(temp.begin(),temp.end());
    for (int i = 0 ; i < k ; i++)
    {
        ret.second += temp[i];
    }
    return ret;
}
int main()
{
    ios::sync_with_stdio(0);
    vec.push_back(0);
    cin >> n >> s;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> ai;
        vec.push_back(ai);
    }
    int l = 0,r = n;
    int mid;
    ii ans;
    while(l <= r)
    {
        mid = (l+r)/2;
        ii c = check(mid);
        if (c.second <= s)
        {
            l = mid+1;
            ans = c;
        }
        else r = mid-1;
        //cout << l << ' ' << r << endl;
    }
    cout << ans.first << ' ' << ans.second << endl;

    return 0;
}
