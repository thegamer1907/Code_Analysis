#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void f() {
		int n;
		cin>>n;
		string a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=n-2;i>=0;i--) {
				int prefixLen =0;
				for(;prefixLen<a[i].length() and prefixLen<a[i+1].length() and a[i][prefixLen] == a[i+1][prefixLen]; prefixLen++);
				if(prefixLen < a[i].length() and prefixLen < a[i+1].length()) {
						if(a[i][prefixLen] > a[i+1][prefixLen])
								a[i] = a[i].substr(0, prefixLen);
				} else if(prefixLen < a[i].length()) {
						a[i] = a[i].substr(0, prefixLen);
				} /* else {
				}*/ //nothing is needed to be done
		}
		for(int i=0; i<n;i++)
				cout << a[i] << endl;
}

int main() {
	f();
	return 0;
}
