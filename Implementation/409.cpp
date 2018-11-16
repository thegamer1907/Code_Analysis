#include <iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;





int main()
{


    int n,k;
    int c=0;
    cin>>n>>k;
     int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
for(int i=0;i<n;i++)
{
    if(arr[i]>=arr[k-1]&&arr[i]>0)
        c++;
}
cout<<c<<endl;

 return 0;
}