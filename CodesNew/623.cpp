#include<bits/stdc++.h>
using namespace std;
#define mp make_pair

int main()
{
  int n,m;
  cin>>n>>m;
  map<string,int> m1,m2;
 map<string,int>::iterator k;
  for(int i=0;i<n;i++)
  {
  	string s;
  	cin>>s;
  	m1[s]++;
  }
  for(int i=0;i<m;i++)
  {
  	string s;
  	cin>>s;
  	m2[s]++;
  }

  int x,y;
  x=m1.size();
  y=m2.size();
  int cnt=0;
 if(x<=y)
 	{
       
       for(k=m1.begin();k!=m1.end();k++)
       {
       	string s=k->first;
       	if(m2.count(s))
       	cnt+=min(k->second,m2[s]);
       }
 	}
 else
    {
      for(k=m2.begin();k!=m2.end();k++)
       {
       	string s=k->first;
       	if(m1.count(s))
       	cnt+=min(k->second,m1[s]);
       }
    }

   n-=cnt;
   m-=cnt;
   int flag=1;
   if(cnt&1)
   	flag=0;
   if(flag)
   {
   	if(n>m)
   		cout<<"YES\n";
   	else
   		cout<<"NO\n";
   }
   else
   {
   	if(n>=m)
   		cout<<"YES\n";
   	else
   		cout<<"NO\n";
   }
}