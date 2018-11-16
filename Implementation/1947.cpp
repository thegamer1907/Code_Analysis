#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int x,y,z,sum_x=0,sum_y=0,sum_z=0;
        for(int i=1;i<=n;i++)
        {
            cin>>x>>y>>z;
            sum_x+=x;
            sum_y+=y;
            sum_z+=z;
        }
        if(sum_x==0 && sum_y==0 && sum_z==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
