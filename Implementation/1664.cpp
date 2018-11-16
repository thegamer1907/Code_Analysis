#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;
char a[maxn];

int main(void){
	scanf("%s",a);
	int value0 = 0,value1 = 0;
	if(a[0] == '0') value0 = 1;
	if(a[0] == '1') value1 = 1;
	for(int i = 1;i < strlen(a);i++){
		if(a[i] == a[i-1] && a[i] == '0') {
			 value0++;
			 if(value0 >= 7 ) break;
		}
		else if(a[i] == a[i-1] && a[i] == '1') {
			value1++;
			if(value1 >= 7) break;
		}
		else if(a[i] != a[i-1] && a[i] == '1'){
			value0 = 0;
			value1 = 1;
		}
		else if(a[i] != a[i-1] && a[i] == '0'){
			value1 = 0;
			value0 = 1;
		}
	}
	if(value0 >= 7 || value1 >= 7) cout<<"YES";
	else cout<<"NO";
	return 0;
}