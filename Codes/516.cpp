#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
    int p=1;
    for(int i=1;p<=10000;i++)
    {
        int t=i;
        int sum=10;
        while(t)
        {
            sum-=t%10;
            t/=10;
        }
        if(sum>=0)
        {
            a[p++]=i*10+sum;
        }
    }
    int k;
    cin>>k;
    cout<<a[k]<<endl;
}
