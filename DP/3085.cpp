#include<bits/stdc++.h>
using namespace std;

const int C=1e9+7;
int n, tab[3005], blep[3005], opt[3005], wynopt=C;

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>tab[i];
    for(int i=1;i<=n;i++)cin>>blep[i];
    opt[1]=-1;
    opt[n]=-1;
    for(int i=2;i<n;i++)
    {
        opt[i]=-1;
        int pom=C;
        for(int j=i+1;j<=n;j++)
        {
            if((tab[j]>tab[i])&&(blep[j]<pom))
            {
                opt[i]=j;
                pom=blep[j];
            }
        }
    }
    for(int i=1;i<=n-2;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((opt[j]!=-1)&&(tab[j]>tab[i]))wynopt=min(wynopt, blep[i]+blep[j]+blep[opt[j]]);
        }
    }
    if(wynopt==C)wynopt=-1;
    cout<<wynopt<<endl;
    return 0;
}
