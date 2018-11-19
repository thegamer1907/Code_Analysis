#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string q[150];
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    for(int  i = 0 ; i<n ; ++i)
    {
        cin>>q[i];
    }
    int ans = 0;
    for(int i = 0 ; i<n ; ++i)
    {
        for(int j = 0 ; j<n ; ++j)
        {
            string p = q[i] + q[j];
            if(p.find(s) != -1) ans = 1;
        }
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
