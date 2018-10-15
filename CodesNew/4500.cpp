#include<bits/stdc++.h>
using namespace std;
int arr[500010];

int kangaroo(int mid,int n)
{   int count=0;
    for(int i=0;mid<n;)
    {
        if(arr[mid]>=2*arr[i])
        {
            count++;
            i++;
        }
        mid++;
     }
    return count;
}

int main()
{
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n%2==0)
    {
        count=kangaroo(n/2,n);
        
        if(count==n/2)
        cout<<count;
        else
        cout<<count+2*( (n/2)-count );
    }
    else
    {
        count=kangaroo(n/2+1,n);
        if(count==n/2)
        cout<<count+1;
        else
        cout<<count+2*((n/2)-count)+1;
    }
    
}



