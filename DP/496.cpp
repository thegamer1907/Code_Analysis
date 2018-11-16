#include <bits/stdc++.h>
using namespace std;
#define forr(k) for(int i=0; i<k; i++)

int main() {
	int n; cin>>n;
	int boys[n+1];
	forr(n)
		cin>>boys[i];
	int m; cin>>m;
	int girls[m+1];
	forr(m)
		cin>>girls[i];
	sort(boys, boys+n);
	sort(girls,girls+m);
	int count=0;
	for(int i=n-1, j=m-1; j>=0 && i>=0;) {
		int diff=abs(boys[i]-girls[j]);
		if(diff>1  && boys[i]>girls[j]) i--;
		else if(diff>1 && girls[j]>boys[i]) j--;
		else if(diff<=1) {
			count++;
			i--;
			j--;
		}
	}
	cout<<count<<endl;
	return 0;
}