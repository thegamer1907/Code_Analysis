#include <iostream>
using namespace std;

int main() {
	string s;
	int n,t,i,j;
	cin>>n>>t>>s;
	for(i=0;i<t;++i)
	{
	    for(j=0;j<n;j++)
	    {
	        if(s[j]=='B' && s[j+1]=='G')
	        {
	            s[j]='G';
	            s[j+1]='B';
	            j++;
	        }
	    }
	}
	cout<<s;
	return 0;
}
