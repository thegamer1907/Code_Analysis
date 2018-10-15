#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,temp;
    bool test = false;
     cin>>n;
     temp=n;
     int arr[n];
     for(int i=0 ; i< n ; i++)
     cin>>arr[i];
     sort(arr,arr+n);
     for(int i=0 ,j=(n/2); i<n/2,j < n  ;  j++)
     {

             if(arr[i]*2 <= arr[j])
             {
                 i++;
                temp--;
             }

     }

     if(n%2!=0 && temp== n/2)
     cout<<temp+1;
     else
        cout<<temp;
    return 0;
}