#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pass, in;
    int n, o = 0, z = 0;
    cin>>pass>>n;
    for(int i=0; i<n; i++)
    {
        cin>>in;
        if(in==pass)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(in[1]==pass[0])
            o = 1;
        if(in[0]==pass[1])
            z = 1;
    }
    if(o && z)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}