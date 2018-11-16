

#include <bits/stdc++.h>

using namespace std;



int main()
   {

   int n;
   int m;
   cin>>n>>m;
   int arr[n],x,y=0;

   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   if(arr[0]==0)
    cout<<0;
   else{

    x=arr[m-1];
    if(x==0){
    for(int i=0;i<n;i++){
        if(arr[i]>x)
            y++;
    }}
    else{
            for(int i=0;i<n;i++){
        if(arr[i]>=x)
            y++;
    }

    }


    cout<<y;




   }

     return 0;


     }
