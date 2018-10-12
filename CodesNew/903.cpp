#include<bits/stdc++.h>
using namespace std;

int main()
{
    map< string,int > mp;
    int n,m;
    cin>>n>>m;
    int same = 0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        mp[s] = 1;
    }
    for(int i=0;i<m;i++)
    {
        string s;
        cin>>s;
        if(mp[s]) same++;
    }
    n = n-same;
    m = m-same;
    if (same % 2 == 1)
        n >= m ? cout << "YES" : cout << "NO";
    else
        n > m ? cout << "YES" : cout << "NO";

    return 0;
}
