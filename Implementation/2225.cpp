#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long k,n,w,total;

    cin>>k>>n>>w;

    total=k*w*(w+1)/2;
    if(total<n)
        cout<<"0"<<endl;
    else    cout<<(total-n)<<endl;

    return 0;
}
