#include <string>
#include <iostream>
#include <set>
using namespace std;
int a, b, n, i, j, k;
set <string> st;
string s1;
int main () {
	cin >> a >> b;
	for (i=0; i<a+b; i++) {
		cin >> s1;
		st.insert(s1);
	}
	k=a+b-st.size();
	if (k%2==1) a++;
	if (a>b) cout << "YES";
	else cout << "NO";
}