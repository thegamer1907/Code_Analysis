#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nb,c=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>nb;
    int a[nb],i;
    for(i=0;i<nb;i++)
        cin>>a[i];
    int ng;
    cin>>ng;
    int g[ng];
    for(i=0;i<ng;i++)
        cin>>g[i];
    sort(a,a+nb);
    sort(g,g+ng);
    for(i=0;i<nb;i++)
    {
        for(int j=0;j<ng;j++)
        {
            if(abs(a[i]-g[j])<=1)
            {
              c++;
              a[i]=1000;
              g[j]=-1000;
              continue;
            }
        }
    }
    cout<<c;
}
