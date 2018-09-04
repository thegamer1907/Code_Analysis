#include<bits/stdc++.h>
using namespace std;

int binsearch(int a[],int x,int n)
{
    int s=0,e=n-1,ans=0;
    while(s<=e)
    {
    //cout<<"fwa";
    int mid=(s+e)/2;
    if(x==a[mid])
    {

        ans=mid;
        return ans;
    }
    else if(x<a[mid])
    {
        e=mid-1;
              ans=mid;


    }
    else if(x>a[mid])
    {
        s=mid+1;
    }

    }
    return ans;
}


int main()
{
    int n,i,a[100002],m,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=0)
        {
            a[i]=a[i-1]+a[i];
        }
    }
//    for(i=0;i<n;i++)
//    {
//        cout<<a[i]<<" ";
//    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        cout<<binsearch(a,x,n)+1<<endl;
    }

}
