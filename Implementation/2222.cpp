#include<iostream>
using namespace std;
int main()
{
    int i,k,n,w,s=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++){

        s=s+(i*k);
    }
    if(s>n)
        cout<<s-n;
    else
        cout<<0;

}