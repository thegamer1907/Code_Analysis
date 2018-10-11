#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int *p=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    int x=0,y=0;
    int sum=0;
    int fuc=0;
    while(x!=n)
    {
        if(sum+p[x]<=m)
        {
            sum+=p[x++];
            if(x-y>fuc)
                fuc=x-y;
        }
        else
        {
            sum-=p[y++];
        }
    }
    cout<<fuc;
}
