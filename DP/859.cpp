#include<bits/stdc++.h>
using namespace std;
int n,ma,x,su,sm;
int main()
{
    while(cin>>n)
    {
        su=ma=sm=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x)
            {
                sm++;
                su=max(0,su-1);
            }
            else
            {
                su++;
                ma=max(su,ma);
            }
        }
        if(ma>0)
        cout<<sm+ma<<endl;
        else
        cout<<sm-1<<endl;
    }
}
