#include <iostream>
using namespace std;

int main() {
    int n,t,i,j;char c;
    char s[55];  
	cin>>n>>t;
	cin>>s;
	for(i=1;i<=t;i++)
	{
	    for(j=0;j<n-1;j++)
	    if(s[j]=='B' && s[j+1]=='G')
	    {s[j]='G';s[j+1]='B';j++;}
	}
	cout<<s<<"\n";
	return 0;
}
