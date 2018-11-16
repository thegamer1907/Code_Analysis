#include<bits/stdc++.h>

using namespace std;

int main() {
 int n;
 cin>>n;
 int x;
 vector<int>v;
 
 
 for (int i=0;i<n ;i++)
 {cin>>x;   v.push_back(x);}
 
 int m=0;
 

     for (int j=0;j<n;j++)
      { 
          for (int k=j;k<n;k++)
           {  int c=0;
                for (int i=0;i<n;i++)
 
                  { if (i<=k && i>=j) c+= (1-v[i]);
                    else c+=v[i];}
                    m=max(m,c);
           }
      }
      cout<<m;
}
  