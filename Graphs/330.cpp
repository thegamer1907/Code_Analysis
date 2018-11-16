#include <bits/stdc++.h>

using namespace std;

int n, t;
string q;

int main()
{
    cin >> n >> t >> q;
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(q[j] == 'B' && q[j + 1] == 'G')
            {
                swap(q[j], q[j + 1]);
                j++;
            }
        }
    }
    cout << q;
}
