#include <cstdio>
#include <iostream>
#include <vector>
#include <set>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>


using namespace std;
int a[100];
int main()
{
    memset(a,0,sizeof(a));
    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        int m=0;
        for(int j=0; j<k; j++)
        {
            int x;
            cin>>x;
            if(x)
            m+=(1<<j);
        }
        a[m]=1;
      //  cout<<m<<endl;
    }
    for(int i=0; i<(1<<k); i++)
    {
        for(int j=0; j<(1<<k); j++)
        {
            if((i&j)==0&&a[i]&&a[j])
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;

    return 0;
}
