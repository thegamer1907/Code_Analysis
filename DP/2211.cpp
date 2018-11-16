#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	vector<int> uniqueUntilEnd(n + 1);
	uniqueUntilEnd[n] = 1; // there is exactly one unique element in the set {a[n]}
	unordered_set<int> currentElements;
	currentElements.insert(a[n]);
	for (int i = n - 1; i >= 1; --i)
	{
		if (currentElements.find(a[i]) == currentElements.end())
		{
			uniqueUntilEnd[i] = uniqueUntilEnd[i + 1] + 1;
		}
		else
		{
			uniqueUntilEnd[i] = uniqueUntilEnd[i + 1];
		}
		currentElements.insert(a[i]);
	}
	for (int i = 0; i < m; ++i)
	{
		int li;
		cin >> li;
		cout << uniqueUntilEnd[li] << "\n";
	}
	return 0;
}