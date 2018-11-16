#include <iostream>

using namespace std;
long long  y[2009][2009];
long long g=1000000007,n;
void dfs(long long ii, long long k)
{
    long long p=0;
    for (long long i=1; i<=n/ii; i++)
    {
        if (y[ii*i][k-1]==0)
            dfs(ii*i,k-1);
        p+=y[ii*i][k-1];
        p=p%g;
    }
    y[ii][k]=p;
}
int main()
{
    long long k;
    cin>>n>>k;
    k++;
    for(long long kk=1; kk<n; kk++)
    {
        y[kk][1]=1;
        y[n][kk]=1;
    }
    if (y[1][k]==0)
        dfs(1,k);
    cout<<y[1][k];
}