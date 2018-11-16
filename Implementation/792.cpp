#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <stdlib.h>


using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin >> s;
	for (int i=0;i<t;i++)
	{
		for (int j=0;j<n-1;j++)
		{
			if (s[j]=='B'&&s[j+1]=='G')
			{
				s[j]='G';
				s[j+1]='B';
				j++;
			}
		}
	}
	cout << s;
	//int jjkdljfl;
	//cin >> jjkdljfl;
	return 0;
}