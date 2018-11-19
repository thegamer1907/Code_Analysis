#include<bits/stdc++.h>
using namespace std;

int main(){
	char a[4], b[150][4];
	int n;
	
	scanf("%s %d", a, &n);
	for(int i=0; i<n; i++) scanf("%s", b[i]);
	
	bool flag = false;
	for(int i=0; i<n; i++){
		if(strcmp(a, b[i])==0) flag = true;
		if(b[i][1] == a[0]){
			for(int j=0; j<n; j++){
				if(b[j][0] == a[1]) flag = true;
			}						
		}	
	}
	
	printf(flag?"YES\n":"NO\n");	
	
	return 0;
}
