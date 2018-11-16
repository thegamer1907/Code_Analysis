#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,y,z,sum1=0,sum2=0,sum3=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        sum1+=x;
        cin>>y;
        sum2+=y;
        cin>>z;
        sum3+=z;
    }
    if(sum1==0 && sum2==0 && sum3==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
