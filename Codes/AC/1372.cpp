#include <bits/stdc++.h>

#define ll long long int
#define fi first
#define se second
#define inputOutput ios_base::sync_with_stdio(0);

using namespace std;

const double eps = 1e-9;

ll n, b, a, curr, h, l, mid, prevMid;
pair<ll,ll> ans, c;
ll arr[100099];

pair<ll,ll> e3mlElSa7()
{
    l = 0, h = n;
    while(l < h)
    {
        mid = l + (h-l) / 2;
        if(mid == prevMid && mid == l) ++mid;
        else if(mid == prevMid && mid == h) --mid;
        //cout << mid << endl;
        multiset<ll> val;
        for(int i = 0; i < n; i++)
            val.insert(arr[i] + (i+1) * mid);
        int counter  = 0;
        curr = 0;
        for(auto x : val)
        {
            if(curr + x > b) break;
            ++counter;
            curr += x;
            if(counter == mid) break;
        }
        if(counter == mid){
                l = mid;
                c = {mid,curr};
        }
        else h = mid-1;
        prevMid = mid;
    }
    return c;
}

int main()
{
    //freopen("o.txt","w",stdout);
    inputOutput;
    cin >> n >> b;
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    ans = e3mlElSa7();
    cout << ans.first << " " << ans.second << endl;
	return 0;
}
