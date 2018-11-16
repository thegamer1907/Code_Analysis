#include <iostream>

using namespace std;

int main()
{
    int a[100],n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    int d=0;
   
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1]&&a[i]>0)d++;
    
    }
    cout<<d;
}