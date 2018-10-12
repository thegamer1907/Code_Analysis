#include <bits/stdc++.h>
using namespace std;
string  s[5000001];
int main()
{
	int n,i,j;
	cin>>n;
	for( i=0;i<n;++i)cin>>s[i];
	for( i=n-2;i>=0;i--)
		if(s[i]>s[i+1])//the n-2 and n-1 last two words
			for( j=0 ; j < s[i].size();j++)
				if(s[i][j] > s[i+1][j])
					s[i].resize(j);
	for( i=0;i<n;++i)cout<<s[i]<<endl;
}