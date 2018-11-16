#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int aa=0,bb=0,cc=0;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        aa+=x;
        bb+=y;
        cc+=z;

    }
    if (aa==0 && bb==0 && cc==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;

}