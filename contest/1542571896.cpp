#include<cstring>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	char key[4], str[150][4];
	int n;
	scanf("%s",key);
	scanf("%d",&n);
	for(int i = 0; i < n; ++i){
		scanf("%s",str[i]);
	}
	bool a = false, b = false;
	for(int i = 0; i < n; ++i){
		if(str[i][0] == key[1])
			a = true;
		if(str[i][1] == key[0])
			b = true;
		if(str[i][0] == key[0] && str[i][1] == key[1])
			a = b = true;
		if(a && b)break; 
			
	}
	if(a && b)printf("YES\n");
	else printf("NO\n"); 
} 