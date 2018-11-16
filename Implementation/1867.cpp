#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int sum=0, sum1=0, sum2=0;
        while(n--)
        {
            int a, b, c;
            cin>>a>>b>>c;
            sum+=a;
            sum1+=b;
            sum2+=c;

        }
        if(sum==0&&sum1==0&&sum2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
