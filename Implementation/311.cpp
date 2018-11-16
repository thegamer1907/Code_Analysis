#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,extra=0,ct=0;
    cin>>n>>a;
    int p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        if(p[i]==0 && i<a){
            ct++;
        }
    }

    for(int j=a;p[j]==p[a-1];j++){
        extra++;
    }
    if(p[a-1]==0){
        if(a-ct < 0){
            cout<<"0"<<endl;
        }
        else {
            cout<<a-ct<<endl;
        }
    }
    else {
       cout<<a+extra<<endl;
    }

    return 0;
}
