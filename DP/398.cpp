#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	int b[101];
	for(int i=0;i<n;i++)
		cin>>b[i];
	cin>>m;
	int g[101];
	for(int i=0;i<m;i++)
		cin>>g[i];

	sort(b,b+n);
	sort(g,g+m);
	int i=0,j=0;
	int count=0;
	while(i!=n && j!=m){
		if(b[i]==g[j] || b[i]==(g[j]+1) || b[i]==(g[j]-1)){
			count++;
			i++;j++;
		}
		else if(b[i]<g[j])
			i++;
		else
			j++;
	}

	cout<<count<<endl;
	return 0;
}