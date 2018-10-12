#include <iostream>
#include<set>
#include<vector>
#include <stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
 vector<int>a;
 vector<int>b;
 vector<int>c;
int y;
for(int i=0;i<n;++i)
{
    cin>>y;
    a.push_back(y);

}


  sort(a.begin(),a.end());
  for(int i=n/2;i<n;++i)
  {
      b.push_back(a[i]);
  }

   vector<int>::iterator lower;

int v= n/2;
int cnt = 0;
int ans = n;


   for(int i=0;i<v;++i)
   {
       lower = lower_bound(b.begin(),b.end(),a[i]*2);
           if(lower!=b.end())
           {
               cnt++;
               b[lower-b.begin()] = -1;
           }

   }
cout<<ans-cnt;
}