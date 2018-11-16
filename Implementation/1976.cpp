#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,sum1=0,sum2=0,sum3=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        sum1=sum1+a;
        sum2=sum2+b;
        sum3=sum3+c;
    }
    if (sum1==0&&sum2==0&&sum3==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}