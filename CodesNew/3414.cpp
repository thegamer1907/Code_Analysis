/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    int a,b,k,min,sum;
    sum=0;
    cin>>a>>b;
    int c[a];
    for(k=0;k<a;k++)
    {
        cin>>c[k];
    }
    sort(c,c+a);
    for(k=0;k<a;k++)
    {
        sum = sum + (c[a-1]-c[k]);
    }
    if(sum>b)cout<<c[a-1]<<" ";
    else
    { 
    if((b-sum)%a==0)
    cout<<c[a-1] + (b-sum)/a<<" ";
    else cout<<c[a-1] + ((b-sum)/a) + 1<<" ";
    }
    cout<<c[a-1]+b;
    return 0;
}
