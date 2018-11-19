#include<bits/stdc++.h>

using namespace std;
int main()
{
   double h, m, s, t1, t2, p, k;

   cin>>h>>m>>s>>t1>>t2;

   m=(m+(s/60));

   h=((h*5)+(m*5)/60);

   if(h>60) h-=60;

   if(m>60)m-=60;
   t1*=5; t2*=5;

   p=max(t1,t2); k=min(t1,t2);


   if((k<=h&&h<=p)&&(k<=m&&m<=p)&&(k<=s&&s<=p)) cout<<"YES"<<endl;

   else if((k>=h||p<=h)&&(k>=m||p<=m)&&(k>=s||p<=s))
       cout<<"YES"<<endl;

   else cout<<"NO"<<endl;


   return 0;
}


