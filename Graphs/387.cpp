#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 //	int arr[100001];
int main() {
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int i=0;i<t;i++)
	{
		for(int j=(n-1);j>0;j--)
		{
			if(s[j]=='G' && s[j-1]=='B')
			{
				s[j]='B';
				s[j-1]='G';
				j--;
			}
		}
	}
	cout<<s;
	return 0;
	
}