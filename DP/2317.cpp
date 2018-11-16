/*input
10 10
1 2 3 4 1 2 3 4 100000 99999
1
2
3
4
5
6
7
8
9
10
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}

	set<int> s;
	int suffix[n+1];
	suffix[n] = 0;
	for(int i = n-1;i>=0;i--){
		s.insert(a[i]);
		suffix[i] = s.size();
	}
	while(q--){
		cin>>n;
		n--;
		cout<<suffix[n]<<"\n";
	}
}