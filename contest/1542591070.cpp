#include <bits/stdc++.h>
using namespace std;



int main(){
	char a[3];
	char c[101][3];
	int n;
	
	scanf(" %s", a);
	scanf("%d", &n);
	
	bool mark = false;
	bool mark1 = false, mark2 = false;
	char one, two;
	for(int i = 0; i < n; ++i){
		scanf(" %s", c[i]);
		if((c[i][0] == a[0] && c[i][1] == a[1]) || (c[i][1] == a[0] && c[i][0] == a[1])){
			mark = true;
		}
		
		if(c[i][1] == a[0]){
			one = c[i][1];
			mark1 = true;
		}
		
		if(c[i][0] == a[1]){
			two = c[i][0];
			mark2 = true;
		}
	}
		
	if(mark || (mark1 && mark2))
		puts("YES");
	else
		puts("NO");
	
	return 0;
}