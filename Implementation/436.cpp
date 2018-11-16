
#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,i,k,a[50],j=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];


    }
    for(i=0;i<n;i++)
    {

      if(a[i]>=a[k-1] && a[i]>0)
      {
          j++;
      }

    }
    cout<<j<<endl;
    return 0;

}
