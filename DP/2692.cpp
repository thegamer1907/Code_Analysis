#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct Item
{
    int x, h;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    int n;
    cin >> n;
    Item v[n];
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].x >> v[i].h;
    }
    int l = v[0].x, cnt = 1;
    for(int i = 1; i < n; i++)
    {
        if(l < v[i].x - v[i].h)
        {
            l = v[i].x;
            cnt++;
        }
        else
        {
            if(i != n - 1)
            {
                if(v[i].x + v[i].h < v[i + 1].x)
                {
                    l = v[i].x + v[i].h;
                    cnt++;
                }
                else
                {
                    l = v[i].x;
                }
            }
            else
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
