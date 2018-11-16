#include<iostream>
using namespace std;
int main()
{
    int i,n,ans,count0=0,count1=0,countm=-1,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            count1++;
            if(count0>0)
            {
                count0--;
            }
        }
        if(a==0)
        {
            count0++;
            if(countm<count0)
            {
                countm=count0;
            }
        }
    }
    ans=countm+count1;
    cout<<ans;
    return 0;
}
