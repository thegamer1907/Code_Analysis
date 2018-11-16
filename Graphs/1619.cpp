#include <iostream>

int main()
{
    int n,t,s=1;
    int a[30000];
    std::cin>>n>>t;

    for(int i=1;i<n;i++)
    {
        std::cin>>a[i];
    }

    while (s<t)
    {
        s+=a[s];
     }

    if(s==t)
        std::cout<<"YES"<<std::endl;

        else
             std::cout<<"NO"<<std::endl;

    return 0;
}
