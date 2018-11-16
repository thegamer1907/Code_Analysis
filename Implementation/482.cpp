#include<iostream>
using namespace std;
int main()
{
    int n,k,arr[50],cnt=0;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

     for(int i=0;i<n;i++)
     {
         if(arr[i]>0){
         if(arr[k-1]<=arr[i])
         {
             cnt++;
         }
         }
     }

           cout<<cnt;

}