#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int l,h,pos1=-1,mid,pos2;
    sort(arr,arr+n);
    int x=arr[n-1]/2;
    l=0;
    h=n;
    /*while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]<=x)
        {
            l=mid+1;
            pos1=mid;
        }
        else
            h=mid-1;
    }*/
    if(n%2==1)
        pos1=(n-1)/2;
    else
        pos1=n/2-1;
    int cnt=0;
    for(int i=pos1,j=n-1;i>=0 && j>pos1;i--)
    {
        if(arr[i]*2<=arr[j])
        {
            cnt++;
            j--;
        }
    }
    cout << n -cnt << "\n";
}
