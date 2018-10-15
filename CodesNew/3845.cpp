#include<bits/stdc++.h>
using namespace std;
#define l long long
int main(){
    l n,x,max=0;
    int flag=0;
    cin>>n;
    l s=0;
    for( l i=0;i<n;i++){
        cin>>x;
        if(max<x)max=x;
        s+=x;
    }
    l a;
    if(s%(n-1)==0)
    a=s/(n-1);
    else
    a=(s/(n-1))+1;
    if(max>a)
        cout<<max;
    else
        cout<<a;
    return 0;
}
