#include<bits/stdc++.h>
using namespace std;
 int main()
   {
       int n,k,A[50];
       cin>>n>>k;
          for (int i=0;i<n;++i)
       cin>>A[i];
       //sort(A,A+n);
       int count=0;
        for (int i=0;i<n;++i)
            if(A[i]>=A[k-1] && A[i]>0)
                count++;
       cout<<count;
   }