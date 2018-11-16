#include <bits/stdc++.h>
using namespace std;

void swap(char &a, char &b)
{
	char temp = a;
	a = b;
	b = temp;
}

int main() {
	int n,t,i;
	cin>>n>>t;
	string s, waste;
	getline(cin,waste);
	getline(cin,s);
	while(t--)
	{
		i=0;
		while(i<n-1)
		{
			if(s[i]=='B' && s[i+1]=='G')
			{
				swap(s[i], s[i+1]);
				i+=2;
				continue;
			}
			i++;
		}
	}
	cout<<s<<endl;
	return 0;
}