#include<iostream>
#include<vector>
using namespace std;
int main()
{        
      int n,k;
      cin>>n;
      cin>>k;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      cin>>v[i];
      int val=v[k-1];
      int c=0;
      for(int i=0;i<n;i++)
      {
               if(v[i]>=val&&v[i]>0)
               c++;
      }
      cout<<c;
      
       return 0;
}
       

