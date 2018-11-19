#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
char s[2];
int a = 0, b = 0;
char c[2];
int main(){
	int n;
	scanf("%s", &s);
	cin >> n;
	while (n--)
	{
		scanf("%s", &c);
		if (c[1] == s[0])
			b++;
		if (c[0] == s[1])
			a++;
		if(c[1]==s[1]&&c[0]==s[0]){
			a++;b++;
		}

	}
	if (a != 0 && b != 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

	   			  	 				 		 			   	   	