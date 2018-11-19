#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
using namespace std;
int main()
{ int n,flag,judge1=0,judge2=0;
  char s1[5],s2[5];
  scanf("%s",s1);
  cin>>n;
  flag=0;
  while(n--)
  {
  	scanf("%s",s2);
  	if(s2[0]==s1[1]&&!judge1)
  	{
  	 flag++;
	 judge1=1;	
	  }
  	if(s2[1]==s1[0]&&!judge2)
  	{
  	 flag++;	
  	 judge2=1;
	  }
  	if(s1[0]==s2[0]&&s1[1]==s2[1])
  	{
  		flag+=2;
	  }
  }
  if(flag>=2)cout<<"YES"<<endl;
  else cout<<"No"<<endl;
  return 0;
 } 