#include<iostream>
using namespace std;
int n,a,c1,c0,cx,m,r;
int main()
{
    std::cin>>n;
    r=n;
    while(n--)
    {
        std::cin>>a;
        if(a)
        {
            c1++;
            if(c0)
                c0--;
        }
        else
            c0++,cx=max(c0,cx);
    }
    if(r!=c1)
        cout<<c1+cx;
    else
        cout<<c1-1;

    return 0;
}
