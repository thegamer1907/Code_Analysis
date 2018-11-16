#include<iostream>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[3][n];
    int sum1=0,sum2=0,sum0=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[0][i]>>a[1][i]>>a[2][i];
        sum0+=a[0][i];
        sum1+=a[0][i];
        sum2+=a[0][i];
    }
    if (sum0==0&&sum1==0&sum2==0)
    {
        cout<<"YES";
    }
    else {cout<<"NO";}
}
