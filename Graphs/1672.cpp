#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <memory>
#include <time.h>
#include <math.h>
using namespace std;
#define lonmg long LL
int mnp(int a, int b){return a>b;};
int a[30005];
int b[30005];

void dfs(int i, int n, int t, int k)
{
    if(b[i]==t)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(k==n)
    {
        cout<<"NO"<<endl;
        return;
    }
    dfs(b[i], n, t, k+1);

}

int main()
{

    int n, t;
    cin>>n>>t;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        b[i]=i+a[i];
    }

    dfs(1, n-1, t, 1);

    return 0;
}
