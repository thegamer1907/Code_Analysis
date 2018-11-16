#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,k,i;

    cin>>n>>k;

    int arr[n+1];

    for(i=1;i<=n;i++)

    cin>>arr[i];

    int temp = arr[k];

    int res = 0;

    for(i=1;i<=n;i++)

    {

        if(arr[i]>0 && arr[i]>=temp)

        res++;
   
 }
   
 cout<<res;

}