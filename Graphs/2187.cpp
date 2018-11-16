#include <iostream>

using namespace std;

int n,m,ans;

int main()
{
    cin>>n>>m;
    while(m!=n)
    {
        if(m>n)
        {
            if(m%2==1)ans++,m++;
            ans++;m/=2;
        }
        else
        {
            ans+=n-m;
            m=n;
        }
    }
    cout<<ans;
    return 0;
}
