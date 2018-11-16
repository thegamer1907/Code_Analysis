#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int main()
{int n,t;
cin>>n>>t;
string str;
   cin>>str;
  char ch1,ch2;
  char temp;
   int i=0;
   int j=0;
   while(j<t)
  {i=0;
	    while(str[i])
    {
	
    	ch1=str[i];
    	ch2=str[i+1];
    	
    	if(ch1=='B'&&ch2=='G')
    	  {
    	  	temp=ch1;
    	  	ch1=ch2;
    	  	ch2=temp;
		   str[i]=ch1;
		  str[i+1]=ch2;
		  i=i+2;
	      }
	      else i++;
   }
   j++;  
	}
	cout<<str;
	return 0;
}