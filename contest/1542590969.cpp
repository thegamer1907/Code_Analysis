#include <bits/stdc++.h>

#define forr(A,B,C) for(int A=(B);A<(C);A++)

using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int N;
	cin>>N;
	
	bool bdone = false;
	bool edone = false;
	bool odone = false;
	
	forr(i,0,N)
	{
		string ms;
		cin>>ms;
		if (ms == s)
		{
			odone = true;
			break;
		}
		
		if (ms[0] == s[1])
			bdone = true;
		if (ms[1] == s[0])
			edone = true;
	}
	
	if (odone || (bdone && edone))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	
	return 0;
}