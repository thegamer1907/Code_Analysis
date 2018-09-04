#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 100+10;
const int INF = 0x3f3f3f3f;
ll n,x,y,z,L,R,M;
int main()
{
    cin>>n;
    R=n;
    while(R-L>1)
    {
        M=(R+L)>>1;
        x=n;
        y=0;
        while(x)
        {
            z=min(x,M);
            y+=z;
            x-=z;
            x-=x/10;
        }
        if((y<<1)>=n) R=M;
        else L=M;
    }
    cout<<R<<endl;
    return 0;
}
