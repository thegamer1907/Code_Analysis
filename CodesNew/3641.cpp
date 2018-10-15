#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    int max = 0, min = 101;
    vector<int> v(n);
    for(auto &elem : v)
    {
        cin >> elem;
        if(elem > max)
        {
            max = elem;
        }
        if(elem < min)
        {
            min = elem;
        }
    }

    int val = 0; //max people which can be accomodated when max number of people on benches remain same
    for(auto elem : v)
    {
        val += max - elem;
    }

    if(val >= m)
    {
        cout << max << ' ';
    }
    else
    {
        cout << max + ceil(((long double)(m - val))/n) << ' ';
    }

    cout << max + m;
}