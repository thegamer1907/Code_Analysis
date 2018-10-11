#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
   int n,m;
   map<string,int>P;
   map<string,int>E;
   P.clear();
   E.clear();
   scanf("%d%d",&n,&m);
   int seta=0,setb=0;
   for (int i=0;i<n;i++)
   {
      string a;
      cin>>a;
      P[a]++;
   }
   for (int i=0;i<m;i++)
   {
      string b;
      cin>>b;
      if (P[b]==0) setb++;
      E[b]+=1;
   }
   //cout<<setb<<endl;
   if ((n-setb)&1) m--;
   m-=(n-setb)/2;
   n-=(n-setb)/2;
   if (n>m) printf("YES");
   else printf("NO");


}