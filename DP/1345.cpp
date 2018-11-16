#include <iostream>
#include <cstring>
int main()
{
    int n,t,sum=0,max=-1,ans=0;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>t;
        if(t==0)
        {
            ans++;
            if(ans>max) max=ans;
        }
        else
        {
            ans--;
            if(ans<0) ans=0;
        }
        if(ans<max||ans==0)
        sum+=t;
    }
    std::cout<<sum+max;
    return 0;
}

