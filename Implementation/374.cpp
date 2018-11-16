#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int m,k,q;
    cin>>m>>k;
    //q=k;
    int a[100];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    q=a[k-1];
    if(q==0)
    {
        if(a[0]>0)
        {
            for(int i=0;i<k;i++)
            {
                if(a[i]==0)
                {
                    cout<<i<<endl;
                    return 0;
                }
            }
        }
        else
            cout<<"0"<<endl;
    }
    else
    {
        for(int i=k-1;i<m;i++)
        {
            if(a[i]<q)
            {
                    cout<<i<<endl;
                    return 0;
            }
        }
        cout<<m<<endl;
    }
    //return 0;
}
