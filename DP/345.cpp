#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	int b[n];
	for(i=0;i<n;i++)
		cin>>b[i];
	int m;
	cin>>m;
	int g[m];
	for(i=0;i<m;i++)
		cin>>g[i];
	sort(b,b+n);
	sort(g,g+m);
		int count=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if((b[i]-g[j]==0)||(b[i]-g[j]==1)||(b[i]-g[j]==-1)){
				count++;
				g[j]=1000;
				break;
			}
		}
	}
	cout<<count;
	return 0;
}