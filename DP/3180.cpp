#include<iostream>
using namespace std;
int a[200100];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int mx=1,cnt=1;
    for(int i=0;i<n-1;i++)
        if(a[i+1]>2*a[i])
            cnt=1;
        else
            cnt++,
            mx=max(mx,cnt);
    cout<<mx<<endl;
    return 0;
}