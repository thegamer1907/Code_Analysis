#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,Max =0,x,y;
  
    cin>>n;
    int arr[n];
    cin>>y;
    int keep = y;
    for(i = 0;i < n;i++){
        cin>>x;
        if(x>Max)Max = x;
        arr[i] = x;
    }
    for(i = 0;i < n&&y>0;i++){
        if(arr[i]<Max)y=y-Max+arr[i];
    }
    if(y<0)y=0;
    cout<<Max+(int)ceil(y*1.0/n)<<" "<<Max+keep;




    return 0;
}
