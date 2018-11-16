#include <iostream>
using namespace std;

int main() 
{
	long int n,i,j=1,t,a,b,max=0;
	cin>>n>>t;
	string s;
	char p;
	cin>>s;
	for(j=0;j<t;j++)
	{
        for(i=1;i<s.length();i++)
        {
            if((s[i]=='G')&&(s[i-1]=='B'))
            {
                p=s[i];
                s[i]=s[i-1];
                s[i-1]=p;
                i++;
            }
        }
	}
	cout<<s;
	return 0;
}