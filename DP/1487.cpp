#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int z=0,mz=0,z2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 0)
         {
             z++;
             if(z > mz)
            mz = z;
         }
        else if(a[i] == 1)
        {
            z2++;
            if(z > 0)
            {
                z--;
            }
        }
    }
    if(z > mz)
        mz = z;
    if(mz == 0)
        mz = -1;
    cout<<mz+z2;
    return 0;
}
