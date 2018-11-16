#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[109],arr2[109],max_here,max_far,i,j,n,start=0,end=0,s=0,count=0,zero=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr1[i];
        if(arr1[i]==0)
        {
            arr2[i]=1;
        }
        else if(arr1[i]==1)
        {
            arr2[i]=-1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr1[i]==0)
        {
            zero++;
        }
    }
    if(zero==n)
    {
        cout<<n<<endl;
    }
    else if(n==1)
    {
        if(arr1[0]==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    else
    {

        max_far=arr2[0];
        max_here=0;
        for(i=0; i<n; i++)
        {
            max_here=max_here+arr2[i];
            if(max_here>max_far)
            {
                max_far=max_here;
                start=s;
                end=i;
            }
            if(max_here<0)
            {
                max_here=0;
                s=i+1;
            }
        }
        for(i=start; i<=end; i++)
        {
            if(arr1[i]==0)
                arr1[i]=1;
            else if(arr1[i]==1)
                arr1[i]=0;
        }
        for(i=0; i<n; i++)
        {
            if(arr1[i]==1)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
