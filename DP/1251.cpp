#include <iostream>
using namespace std;
main()
{
    //in put
    int n,_1=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)_1++;
    }
    //all are 1
    if(_1==n)
    {
        cout<<n-1;
        return 0;
    }
    // else
    else
    {
       int _2=0,_3=0;
     for(int i=0;i<n;i++)
     {
         if(a[i]==0)
         {
             if(_2>0)
                {
                    _2++;
                  if(_3<_2)
                    _3=_2;
                }
             else
             {
                 _2=1;
             }
         }
         else _2--;
     }
     if(_2>_3)
     cout<< _1 + _2;
     else cout<< _1 + _3;
    }
    return 0;
}
