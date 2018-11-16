#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i,n,score,k,a[100],count=0;
    cin>>n;
    cin>>k;
    if(n>=k)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        score=a[k-1];
        i=0;
        while((i<n)&&(a[i]>=score))
        {
            if(a[i]>0)
            {
                count++;

            }
            else
            {
                cout<<count;
                exit(0);
            }
            i++;
        }
        cout<<count;
    }


    return 0;
}