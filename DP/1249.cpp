#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int arr[105];
int main()
{
    int n,c=0; cin>>n;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        arr[i]=arr[i-1];
        if(!x)arr[i]++;
        else {arr[i]--; c++;}
    }
    int mx=0;
    for(int i=0; i<=n; i++){
        for(int y=i; y<=n; y++){
            if(arr[y]-arr[i]>mx)mx=arr[y]-arr[i];
        }
    }
    if(c==n)return cout<<c-1<<'\n',0;
    cout<<c+mx<<'\n';

    return 0;
}
