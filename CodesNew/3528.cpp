#include <iostream>
using namespace std;
int main()
{
    int n,m,i=0,a[100],ans2,ans1,amax=0,s=0;
    for (cin>>n>>m; i<n; i++ )
    {
        cin>>a[i];
        amax=max(a[i],amax);
        s+=a[i];
    }
    ans2=amax+m;
    for(i=0; m; i=(i+1)%n)
     if (a[i]!=amax ||  s==n*amax)
      {
        a[i]++;
        m--;
        s++;
        amax=max(a[i],amax);
      }
    ans1=amax;
    cout<<ans1<<" "<<ans2;
    return 0;
}

