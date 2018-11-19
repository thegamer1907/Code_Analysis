#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false) , cin.tie(nullptr);
    string s;
    cin >> s;
    int n;
    cin >> n;
    string a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(auto x : a) for(auto y : a)
    {
        string z = x + y;
        if(z.find(s) != string::npos)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
