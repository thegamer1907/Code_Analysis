#include "bits/stdc++.h"
using namespace std;

const int MAX=1e5;

int main()
{
	ios_base::sync_with_stdio(false);
	string X,Y[MAX];
	cin>>X;
	int N;
	cin>>N;
	for(int A=1;A<=N;A++)
	cin>>Y[A];
	for(int A=1;A<=N;A++)
	{
		if(Y[A][0]==X[0]&&Y[A][1]==X[1])
		return cout<<"YES",0;
		if(Y[A][1]==X[0]&&Y[A][0]==X[1])
		return cout<<"YES",0;
		for(int B=1;B<=N;B++)
		{
			if(A==B)
			continue;
			if(Y[A][1]==X[0]&&Y[B][0]==X[1])
			return cout<<"YES",0;
		}
	}
	cout<<"NO";
	return 0;
}