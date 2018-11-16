#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n;
    int k,m;
    cin >> n >> m;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    set<int> s;
    for(int i=n;i>=0;i--)
    {
        s.insert(a[i]);
        a[i]=s.size();
    }
    for(int i=1;i<=m;i++)
    {
        cin >> k;
        cout << a[k] << "\n";
    }
}
   
