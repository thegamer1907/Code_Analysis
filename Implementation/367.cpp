#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int k;
    cin>>n>>k;
    int x[100];
    int a=0;

    for(int i=1;i<=n;++i)
        {

        cin>>x[i];

        }

    for(int i=1;i<=n;++i)
        if(x[i]>=x[k] && x[i]!=0)
          a++;



    cout<<a;
    return 0;
}
