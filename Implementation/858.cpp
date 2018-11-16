#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int n,k,swap,vfg;
    cin>>n>>k;
    string a;
    cin>>a;
    int len=a.size();
    while(k--)
    {
        for(int i=0;i<len;i++){
        if(a[i]=='B' && a[i+1]=='G')
        {
            swap=a[i];
            a[i]=a[i+1];
            a[i+1]=swap;
            i=i+1;
        }
        }
    }
    cout<<a<<endl;
    return 0;
}