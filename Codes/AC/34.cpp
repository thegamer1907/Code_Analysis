#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,l;
	cin>>n>>l;
	int pos[n];
	for (int i=0;i<n;i++){
		cin>>pos[i];
	}
	sort(pos,pos+n);
	double maxi=max(pos[0]-0,l-pos[n-1]);
	for (int i=1;i<n;i++){
		maxi=max(maxi,((double)pos[i]-pos[i-1])/2);
	}
	printf ("%.10f\n",maxi);
}