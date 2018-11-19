#include<bits/stdc++.h>
using namespace std;
int main()
  {
  	 char t[3],s[200][3];
  	 int i,j,k,l,n;
  	  scanf("%s",t);
  	 cin>>n;
  	 for(i=0;i<n;i++)
  	 {
           scanf("%s",s[i]);
  	 }
  	 l=0;
   for(i=0;i<n;i++)
   	  if(s[i][0]==t[0] && s[i][1]==t[1])
   	  	{l=1;break;}
else  if(s[i][0]==t[1] && s[i][1]==t[0])
   	  	{l=1;break;}
   	  k=0;
   	  map<int,int>m;
   if(l==0)
   	  {
   	  	for(i=0;i<n;i++)
   	  		if(t[0]==s[i][1])
   	  			{k=1;m[i]=1;}
   	     if(k==1)
   	     	  {
   	     	  	for(i=0;i<n;i++)
   	     	  		if(t[1]==s[i][0] && m[i]!=1)
   	     	  			l=1;
   	     	  }
   	  }
   	  if(l)
   	  	cout<<"YES\n";
   	  else cout<<"NO\n";
  }