#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m;cin >> n >> m;
    vector<int> a(n);
    vector<int> s(100001, 0);
    for(int i = 0;i < n;i++)
        cin >> a[i];
    s[a[n-1]] = 1;
    a[n-1] = 1;
    for(int i = n-2;i >= 0;i--)
    {
        if(s[a[i]] == 0)
        {
            s[a[i]]++;
            a[i] = a[i+1] + 1;
        }
        else
            a[i] = a[i+1];
    }
    for(int i = 0;i < m;i++)
    {
        int x;cin >> x;
        x--;
        cout << a[x] << endl;
    }
}
