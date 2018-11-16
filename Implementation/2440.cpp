#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    for(i=0;2.5*i*(i+1)<=240-k&&i<=n;++i);
    cout<<i-1;
}