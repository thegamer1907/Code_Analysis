#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        int a[30008];
        for(int i=1; i<n; i++)
            cin>>a[i];
        int i;
        for(i=1; i<n;)
        {
            if(m==i||i>m)
                break;
            i+=a[i];
        }
        if(i==m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
