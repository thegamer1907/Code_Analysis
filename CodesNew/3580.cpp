#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //STD - Sexually Transmitted Disease
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<a[0]+m<<" "<<a[0]+m;
        return 0;
    }
    sort(a,a+n);
    int max=a[n-1]+m;
    int temp=m;
    int dif;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            if(temp==0)
                break;
            dif=a[i+1]-a[i];
            if(dif>temp)
            {
                a[i]=a[i]+temp;
                //cout<<temp<<" "<<m<<" "<<dif<<endl;

                break;
            }
            temp=temp-dif;
            a[i]=a[i]+dif;
            if(i>0)
                i=i-2;
            else
                i--;
            sort(a,a+n);
            continue;
        }
        if(a[i]==a[i+1])
        {
            if(temp==0)
                break;
            a[i+1]=a[i+1]+1;
            temp=temp-1;
            i--;
            continue;
        }
    }
    sort(a,a+n);
    /*for(int i=0;i<n;i++)
        cout<<a[i]<<" ";*/
    cout<<a[n-1]<<" "<<max;
}
