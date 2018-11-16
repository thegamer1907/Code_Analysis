#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <map>
#include <stdio.h>

#define endl '\n'
using namespace std;

int main()
{
	int m,n;
	string s;
	getline(cin,s);
	n = s.length();

	int q[100001] = {0};
	q[0] = 0;

	for (int i = 1; i < n; i++)
	{
		if (s[i] == s[i-1])
			q[i]++;
		q[i]+=q[i-1];
	}

	cin>>m;
	for (int i = 0; i < m; i++)
	{
		int l,r;
		cin>>l>>r;
		l--;r--;
		cout<<q[r]-q[l]<<endl;
	}
	return 0;
}