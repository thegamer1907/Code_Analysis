#include <bits/stdc++.h>

using namespace std;

unsigned long long mn(unsigned long long x,unsigned long long y)
{
    if(x>y)
        return y;
    else
        return x;
}

int main()
{
    string pass;
    cin>>pass;
    int n;
    cin>>n;
    bool ss=false;
    string lst[n];
    for(int i=0;i<n;i++)
    {
        cin>>lst[i];
        if(lst[i]==pass)
            ss=true;
    }
    if(ss)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(lst[i][1]==pass[0]&&lst[j][0]==pass[1])
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
