#include <iostream>
using namespace std;
int main(){
	int n,k,t = 0;
	cin >> n >> k;
	int res [n];
	for (int i = 0; i < n; i++)
	{
		cin >> res [i];
	}
	for (int i = 0; i < n; i++)
	{
		if ((res [i] >= res[k-1]) && res[i] != 0 && k != 0) {
			t++;
		}
	}
	cout << t;
	return 0;
}