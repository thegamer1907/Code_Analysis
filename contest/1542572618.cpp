#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    string m;
    cin>>m;
    int n, l, f1 = 0, f2 = 0;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        string k;
        cin>>k;
        if(k==m)
        {
            cout<<"YES";
            return 0;
        }
        if(k[1]==m[0])
            f1 = 1;
        if(k[0]==m[1])
            f2 = 1;

    }

    if(f1 & f2)
    {
        cout<<"YES";
        return 0;
    }

    cout<<"NO";
    return 0;
}
