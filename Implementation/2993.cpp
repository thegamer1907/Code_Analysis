#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;


int main() {
	int n,t1,t2;
	int a,b;a=b=0;
	cin >> n;
	while (n) {
		cin >> t1 >> t2;
		if(t1>t2)++a;
		else if(t1<t2)++b;

		--n;
	}
	if(a>b) cout << "Mishka";
	else if(a<b) cout << "Chris";
	else cout << "Friendship is magic!^^";

	return 0;
}