#include <cstdio>
#include <string.h>
#include <iostream>

using namespace std;
	
char words[100];
char temp[100];

int main() {
	char password[20];
	int n;
	gets(password);
	scanf("%d",&n);

	for (int i=0;i<=2*n;i++){
		gets(temp);
		sscanf(temp,"%c%c",&words[i-2],&words[i-1]);
		i++;
	}
	bool part1 = false;
	bool part2 = false;
	bool supertrue = false;
	for (int a=0;a<2*n;a++){
		if (words[a+1] == password[0]){
			part1 = true;
		}
		a++;
	}
	for (int a=0;a<2*n;a++){
		if (words[a] == password[1]){
			part2 = true;
		}
		a++;
	}

	for (int i=0;i<2*n;i++){
		if (words[i] == password[0] && words[i+1] == password[1])
		{
			supertrue = true;
		}
		i++;
	}

	if (supertrue){
		printf("YES\n");
	}
	else if (part1 && part2) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	

	return 0;
}