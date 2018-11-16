#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n,t;
	
	cin>>n>>t;
	
	string s;
//	char res[n];
	cin>>s;
//	res[0]=s[0]; 
	for(int j=1;j<=t;j++)
	{
	
	for(int i=1;i<n;)
	{
		if(s[i]=='G'&&s[i-1]=='B')
		{
		s[i-1]='G';
		s[i]='B';	
		
	
		i+=2;	
		}
		
		else
		{
			s[i-1]=s[i-1];
			s[i]=s[i];
			i++;
		}
	
		}
	//s=res;

//	res="";
//	res[0]=s[0];
	}
	int i;
	for(i=0;i<n;i++)
	cout<<s[i];
	cout<<endl;
	
	return 0;
}