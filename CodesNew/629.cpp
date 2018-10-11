#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstdio>
#define f first
#define s second
using namespace std;
int i,k,l,n,m,j;
string a[1000],b[1000];
int main()
{
    //freopen("intput.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
                k++;
        }
    }
    n-=k;
    if(k%2==0)
        n+=(k/2);
    else
        n+=(k/2+1);
    m-=k;
    m+=(k/2);
    if(n>m)
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        cout<<"NO";
        return 0;
    }
}

