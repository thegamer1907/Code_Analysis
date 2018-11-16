#include<iostream>
using namespace std;
int main()
{
 int i,k,N,T;
 char arr[100];
 cin>>N>>T>>arr;
 for(i=1;i<=T;i++)
 {
    
     for(k=0;k<N;)
     {
         if(arr[k+1]=='G'&&arr[k]=='B')
         {
         arr[k]='G';
         arr[k+1]='B';
         k=k+2;
         }
         else k++;
     }
     
 }
 cout << arr;
 }