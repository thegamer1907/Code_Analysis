#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
  int n=s.length();
	int a=0,b=0,conflict=0;
	for(int i=0;i<n-1;i++)
	{
		if((i<n-2 && s[i]=='A' && s[i+1]=='B' && s[i+2]=='A')||(i<n-2 && s[i]=='B' && s[i+1]=='A' && s[i+2]=='B'))
    {
      conflict++;
      i+=2;
    }
    else if(s[i]=='A' && s[i+1]=='B')
    {
      a++;
      i+=1;
    }
    else if(s[i]=='B' && s[i+1]=='A')
    {
      b++;
      i+=1;
    }
	}
	int flag=0;
  if(conflict>=2)
  {
    flag=1;
  }
  if(conflict>=1 && (a>=1 || b>=1))
  {
    flag=1;
  }
  if(a>=1 && b>=1)
  {
    flag=1;
  }
  if(flag==1)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
return 0;
}