#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,k=2,i=1;
    cin>>n>>a>>b;
    while ((a-1)/k!=(b-1)/k)
    {
        k*=2;
        ++i;
    };
    if (k>=n)
        cout<<"Final!";
    else
        cout<<i;
    return 0;
}
