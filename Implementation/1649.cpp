#include<bits/stdc++.h>
using namespace std;
int main()
{
   string n;
   int dem=1;
   cin>>n;
   for(int i=0;i<n.length();i++)
   {
       if(n[i]==n[i+1])dem++;
       else dem=1;
       if(dem==7)
       {
           cout<<"YES";
           return 0;
       }
   }
   cout<<"NO";
}
