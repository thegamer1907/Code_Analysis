#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define MOD 1000000007
#define EPS 1e-6
#define PI 3.14159265

const int size = 1e7 + 5;
int freq1[size];
int freq2[size];
bool Mark[size];

void solve()
{
    for(int i = 2; i < size; i++)
    {
        if(!Mark[i])
        {
            for(int j = i; j < size; j += i)
            {
                Mark[j] = true;
                freq2[i] += freq1[j];
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while(n--)
    {
        int a;
        cin >> a;
        freq1[a]++;
    }
    solve();
    vector<pair<int, ll>> vec;
    for(int i = 1; i < size; i++)
    {
        if(freq2[i] > 0)
            vec.push_back({i, freq2[i]});
    }
    for(int i = 1; i < vec.size(); i++)
    {
        vec[i].second += vec[i - 1].second;
    }
    int m;
    cin >> m;
    while(m--)
    {
        int l, r;
        cin >> l >> r;
        int start = -1, endd = -1;
        int lo = 0, hi = (int)vec.size() - 1, mid;
        while(lo <= hi)
        {
            mid = (lo + hi) / 2;
            if(vec[mid].first >= l)
            {
                start = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        lo = 0, hi = (int)vec.size() - 1;
        while(lo <= hi)
        {
            mid = (lo + hi) / 2;
            if(vec[mid].first <= r)
            {
                endd = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        if(start == -1 || endd == -1)
        {
            cout << 0 << '\n';
        }
        else
        {
            if(start == 0)
                cout << vec[endd].second << '\n';
            else
                cout << vec[endd].second - vec[start - 1].second << '\n';
        }
    }
    return 0;
}
