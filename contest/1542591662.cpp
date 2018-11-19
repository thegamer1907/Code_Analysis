#include <bits/stdc++.h>

using namespace std;

int main()
{
	string pass, pom;
	int n;
	vector<string> val;

 	cin >> pass >> n;
 	for (int i = 0; i < n; ++i) {
 		cin >> pom;
 		val.push_back(pom);
 	}

 	for (int i = 0; i < n; ++i)
 	{
 		if (val[i] == pass) {
 			cout << "YES" << endl;
 			return 0;
 		}
 	}

 	bool first = false, second = false;
 	for (int i = 0; i < n; ++i)
 	{
 		if (val[i][0] == pass[1])
 			second = true;
	
		if (val[i][1] == pass[0])
			first = true;
 	}

 	if (first && second)
 		cout << "YES" << endl;
 	else
 		cout << "NO" << endl;

    return 0;
}