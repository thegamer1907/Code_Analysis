/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int n, a, count1(0), extra0(0), extra0max(-1);
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            count1+=1;
            if(extra0>0)
            {
                extra0-=1;
            }
        }
        else
        {
            extra0+=1;
            if(extra0>extra0max){
                extra0max=extra0;
            }
        }
    }
    cout<<count1+extra0max<<endl;
    return 0;
}
