#include <iostream>
#include <cstdio>
#include <math.h>
#include <cstring>
#define ll long long

using namespace std;

int main()
{
    ll int i,n,k,sum=0,c=0,dd;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n-1;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;)
    {
        i=i+a[i];
        if(i==k-1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
        cout<<"NO"<<endl;
    return 0;
}