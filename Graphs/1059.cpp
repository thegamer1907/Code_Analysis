#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,k,h;
    bool flag=0;
    cin>>n>>k;
    k--;
    int a[n];
    a[n-1]=0;
    for(i=0;i<n-1;i++)
    {
        cin>>h;
        a[i]=i+h;
    }
    i=0;
    while(i<n-1)
    {
        i=a[i];
        if(i==k)
        {
            flag=1;
            break;
        }
    }
    if(flag ==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}
