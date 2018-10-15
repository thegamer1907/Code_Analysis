#include<iostream>
#include<vector>
#include<cstring>

using namespace std;
int endindx[550000];
vector<string> inp;

int main()
{
	int n;
	string curr;
	cin>>n;

	for(int i = 0; i < n; i++)
	{
		cin>>curr;
		inp.push_back(curr);
	}

	endindx[n - 1] = inp[n - 1].size();
	for(int i = n - 2;  i >= 0; i--)
	{
		int done = 0;
		int m1 = inp[i].size(), m2 = endindx[i + 1];

		for(int j = 0; j < min(m1, m2) && (done == 0); j++)
		{
			if(inp[i][j] < inp[i + 1][j])
				done = m1;
			else if(inp[i][j] > inp[i + 1][j])
				done = j;
		}

		if(done == 0)
			done = min(m1, m2);
		endindx[i] = done;
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < endindx[i]; j++)
			cout<<inp[i][j];
		cout<<"\n";
	}

	return 0;
}