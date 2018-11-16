#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x,y,z,sumx=0,sumy=0,sumz=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(!sumx&&!sumy&&!sumz)
        cout<<"YES";
    else cout<<"NO";
}
