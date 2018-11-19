
#include <bits/stdc++.h>
using namespace std;
string a[2000];
int main()
{
  ////  freopen("input.txt", "r", stdin);
  ////  freopen("output.txt", "w", stdout);
    string r;
    cin >> r;
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {

            string res = a[i]+a[j];
            int p = res.find(r);
            if (p != -1)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
}

