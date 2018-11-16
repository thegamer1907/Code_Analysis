//
// Created by Kevin Luo on 2018/10/2.
//
#include <iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int a[30001];
    bool b[30001]={0};
    b[1]=true;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a[i];
        if(b[i]==true)
            b[i+a[i]]=true;
    }
    if(b[t]==true)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
