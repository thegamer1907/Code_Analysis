#include <iostream>
#include<cstdio>

using namespace std;

int main()
{
    //freopen("a.in","r",stdin);
    int n,a[101],b[101],c,maxxx=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {

        for(int j=i;j<n;j++)
        {
            c=0;
            for(int z=i;z<=j;z++)
            {
               b[z]=1-b[z];
            }

        for(int k=0;k<n;k++)
        {
            if(b[k]==1)
            {
                c++;
            }

        }
        if(c>maxxx)
        {
            maxxx=c;
        }
        for(int k=0;k<n;k++)
            {
               b[k]=a[k];
            }

        }
    }
    cout<<maxxx;

    return 0;
}
