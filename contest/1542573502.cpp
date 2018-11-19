#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <sstream>
#include <climits>

using namespace std;


//int mycomp(int a, int b) { return a < b; }
struct per {
	int a, b, s;
};


int mycomp(per a, per b) { return a.b-a.a < b.b - b.a; }


int main() {
	// your code goes here
	string s;
	cin >> s;
	int n; scanf("%d",&n);

	vector<string> ar(n,"");
	for (int i = 0; i < n; i++)cin >> ar[i];

	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if (ar[i] == s || ar[j] == s || (ar[i][1] == s[0] && ar[j][0] == s[1]) || (ar[j][1] == s[0] && ar[i][0] == s[1]))return cout << "YES", 0;
	cout << "NO";
	

	return 0;
	
}
