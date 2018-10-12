#include<iostream>
#include<string>
#include<set>

using namespace std;

int main() {
	set<string> s;
	string entry;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n + m && cin >> entry; i++)
		s.insert(entry);
	if (n > m || (n == m && s.size() % 2 == 1))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}