#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    vector < bool > ans(str.size() - 1);
    for(int i = 0; i < str.size() - 1; i++)
        ans[i] = (str[i] == str[i + 1] ? 1 : 0);
    vector < int > sum(str.size() + 1);
    sum[1] = ans[0];
    for(int i = 2; i < str.size(); i++)
        sum[i] = sum[i - 1] + ans[i - 1];
    
    int m;
    cin >> m;
    
    int l, r;
    for(int i = 0; i < m; i++)
    {
        cin >> l >> r;
        cout << sum[r - 1] - sum[l - 1] << endl;
    }
    
    return 0;
}