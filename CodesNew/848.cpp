#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	set<string> check;
	for (int i=1; i<=n; i++){
		string cur;
		cin>>cur;
		check.insert(cur);
	}
	int A = 0, B = 0, both = 0;
	for (int i=1; i<=m; i++){
		string cur;
		cin>>cur;
		if (check.count(cur) == true){
			both++;
		}
	}
	A = (n - both) + (both / 2 + both % 2);
	B = (m - both) + (both / 2);
	if (A > B){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
}