#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi v;
int n;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    while(cin >> n)
    {
        v = vi(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] = ceil(max(0, v[i]-i) * 1. / n);
        }
        int mn = v[0], pos = 0;
        for(int i = 0; i < n; i++)
            if(v[i] < mn)
            {
                mn = v[i];
                pos = i;
            }
        cout << pos+1 << '\n';
    }
    return 0;
}