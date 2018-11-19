//Mitesh Agrawal
#include <bits/stdc++.h>
using namespace std;

int starter[30];
int ender[30];
int main(){
	int i,j,n,flag = 0;
	string password,s;
	cin >> password;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		cin >> s;
		starter[s[0] - 'a'] = 1;
		ender[s[1] - 'a'] = 1;
		if(s == password)
			flag = 1;
	}
	if(flag || (ender[password[0] - 'a'] && starter[password[1] - 'a']))
		printf("YES\n");
	else
		printf("NO\n");
		

    return 0;
}