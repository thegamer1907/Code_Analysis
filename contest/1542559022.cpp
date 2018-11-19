#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	char a[2], b[100][2];
	int n, f1=0 ,f2=0;
	scanf("%s",a);
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%s",b[i]);
		if(a[0]==b[i][0] && a[1]==b[i][1]){
			f1=1;
			f2=1;
		}
		if(a[0]==b[i][1])
			f1=1;
		if(a[1]==b[i][0])
			f2=1;
	}
	if(f1 && f2)
		printf("YES");
	else
		printf("NO");
	return 0;
}