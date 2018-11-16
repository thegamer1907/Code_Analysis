#include<iostream>
#include<algorithm>
using namespace std;
void swap(string &s,int i ,int j)
  {  char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
  }
int  main()
{   int n,t;
cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++)
    {  for(int j=1;j<s.length();j++)
          {
          	 if(s[j-1]=='B'&&s[j]=='G')
          	       swap(s,j-1,j),j+=1;//cout<<s<<endl;
		  }
    //	cout<<i<<endl;
    	
	}
	cout<<s;
  
  
 }

