#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n,m,equal=0;
	cin>>n>>m;

	string p[n],e[m];
	for(int i=0; i<n; i++)
		cin>>p[i];
	for(int i=0; i<m; i++)
		cin>>e[i];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(p[i]==e[j])
				equal++;
		}
	}

	if(equal%2==1){
		if(n-equal>=m-equal)
			cout<<"YES";
		else
			cout<<"NO";
	}
	else{
		if(n-equal>m-equal)
			cout<<"YES";
		else
			cout<<"NO";
	}

	return 0;

}
