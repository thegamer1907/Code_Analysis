#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    long long sum=0;
    cin>>n>>q;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        a[i]=sum;
    }
long long sum2=0;
    for(int i=0;i<q;i++)
    {
        long long g;
        cin>>g;
        sum2+=g;
        auto y=lower_bound(a,a+n,sum2);
        if(sum2>=sum)
          {
              cout<<n<<endl;
              sum2=0;
          }
        else if(*y==sum2)
            cout<<n-(y-a+1)<<endl;
        else
            cout<<n-(y-a)<<endl;
    }
    return 0;
}