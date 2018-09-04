/// ANTI_LIGHT ///

#include <bits/stdc++.h>

using namespace std;

const int maxn=3e6;
int a[maxn];


int main()
{
    int n,m;
    cin>>n;
    int x=1;

    for(int i=1;i<=n;i++)
    {
        int f;
        cin>>f;
        for(int j=x;j<=x+f-1;j++)
            a[j]=i;
        x+=f;
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int f;
        cin>>f;
        cout<<a[f]<<endl;
    }


    return 0;
}
/// Copy Rights Reserved ///
