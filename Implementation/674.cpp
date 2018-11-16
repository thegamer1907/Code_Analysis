#include<bits/stdc++.h>
using namespace std;
 int main()
   {
       int n,k,A[50];
       cin>>n>>k;
    vector<int>v;
    int d;
          for (int i=0;i<n;++i)
          {
              cin>>d;
              v.push_back(d);
          }
       //sort(A,A+n);
       int count=0;
        for (int i=0;i<v.size();++i)
            if(v[i]>=v[k-1] && v[i]>0)
                count++;
       cout<<count;
   }