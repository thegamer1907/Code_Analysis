#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

set<string> A,B,both;


int main()
{
	int N,M,rep=0;
	string x;
	cin >> N >> M;

	for (int i=0;i<N;i++){
		cin >> x;
		A.insert(x);
	}

	for (int i=0;i<M;i++){
		cin >> x;
		B.insert(x);
		if (A.find(x)!=A.end())
			rep++;
	}

	int Bturns= (int)(B.size()) - rep + rep/2;
	int Aturns= (int)(A.size()) - rep + rep/2 + (rep%2==0 ? 0 : 1);
	
	if (Aturns<=Bturns)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;

	return 0;
}