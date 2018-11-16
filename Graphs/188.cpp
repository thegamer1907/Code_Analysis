#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	int t1=0;
	while (t1<t)
	{
	    for (int i=1;i<s.length();i++)
	    {
	        if (s[i]=='G' && s[i-1]=='B')
	        {
	            s[i]='B';
	            s[i-1]='G';
	            i++;
	        }
	    }
	    t1++;
	}
	cout<<s;
	return 0;
}