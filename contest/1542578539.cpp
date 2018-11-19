#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	
	std::ios_base::sync_with_stdio(false);
	string p;

	std::cin >> p;
	
	int n ;
	std::cin >> n;
	int tn = 2*n;
	vector<string> bs(tn);
	for (int i = 0; i < tn;) {
		
		string a;
		std::cin >> a;
		if (a == p) {
			cout << "YES";
			return 0;
		}
		bs[i] = a;
		bs[i+1] = a;
		i = i +2;
	}
	
	for (int i = 0; i < tn; ++i)
	{
		for (int j = 0; j < tn; ++j)
		{
			if (i != j) {
				string str = bs[i] + bs[j];
				if (str.substr(1,2) == p) {
					cout << "YES";
					return 0;
				}
			}
		}
	}
	
	cout << "NO";

	return 0;
}
