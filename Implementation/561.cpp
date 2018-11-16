#include<bits/stdc++.h>
using namespace std;
int pass(int arr[],int n,int place)
{
    int passing=arr[place-1];
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=passing && arr[i]>0)
        {
        count++;    
        }
    }
   return count; 
}
int main()
{
int n,place;
cin>>n>>place;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];    
}
cout<<pass(arr,n,place);

}