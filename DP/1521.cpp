#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, arr[100],max=0,s[100];
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>arr[i];
s[i]=arr[i];
   }
   for(int i=0;i<n;i++){
    for(int v=i;v<n;v++){  for(int k=0;k<n;k++)arr[k]=s[k];
        for(int z=i;z<=v;z++)
            arr[z]=1-arr[z];
        int x=count(arr,arr+n,1);
          if(x>max) max=x;





    }
   }

cout<<max;

    return 0;
}
