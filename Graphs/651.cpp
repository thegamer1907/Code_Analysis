#include<iostream>
using namespace std;
int main()
{
    int n,t,i,j;
    char arr[1000];
    cin>>n>>t;
     for(j=0;j<n;j++)
     {
         cin>>arr[j];
     }
    for(i=0;i<t;i++)
    {
       for(j=0;j<n;j++)
       {
           if(arr[j]=='B' && arr[j+1]=='G')
           {

               arr[j+1]='B';
               arr[j]='G';
               j++;
           }
       }
    }
    for(j=0;j<n;j++)
    {
        cout<<arr[j];
    }

}
