#include <iostream>
#include <vector>

using namespace std;

int N, M, max;
vector<int> v;

int main()
{
	cin >> N >> M;
	int max = 0;
	int X = M;
	for(int i=0; i<N; i++)
	{
		int z;
		cin >> z;
		v.push_back(z);
		if(z > max) max = z;
	}
	int k = max;
	for(int i=0; i<N; i++)
	{
		int diff = max-v[i];
		v[i] += diff;
		M -= diff;
	}
	while(M > 0)
	{
		k++;
		M -= N;
	}
	cout << k << " " << max+X << endl;
	return 0;
}