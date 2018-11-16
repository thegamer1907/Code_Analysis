#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t,n;
	cin >> n >> t;
	string a;
	cin >> a;
	while(t--)
	{
		int i=n-1;
		while(i>0)
		{
			if(a[i]=='G' && a[i-1]=='B')
			{
				a[i]='B';
				a[i-1]='G';
				i-=2;
			}
			else
				i--;
		}
	}
	cout << a << endl;
	return 0;
}