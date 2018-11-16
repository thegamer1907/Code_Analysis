#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int px,py,pz,x=0,y=0,z=0;
    while(n--)
    {
        cin>>px>>py>>pz;
        x+=px;
        y+=py;
        z+=pz;
    }
    if(x==0 && y==0 && z==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
