#include <bits/stdc++.h>

using namespace std;
#define MAXN 1010101

char s[MAXN];
int z[MAXN];

int Z(){
	z[0] = 0;
	int l = 0, r = 0, n = strlen(s);
	
	for (int i = 1; i < n; i++)
	{
		if(i <= r)
			z[i] = min(z[i-l], r-i+1);
		
		while(i + z[i] < n && s[z[i]] == s[i + z[i]])
			z[i]++;
		
		
		if(i + z[i] - 1 >= r){
			l = i;
			r = i + z[i] - 1;
		}
		
	}
	
	int mx = 0;
	for (int i = 0; i < n; i++)
	{
		if(z[i] == n - i && z[i] <= mx)
			return z[i];
		
		mx = max(mx, z[i]);
	}
	
	
	return -1;
}

int main(){
	scanf("%s", s);
	
	int ans = Z();
	if(ans == -1)
		printf("Just a legend");
	else
		for(int i = 0; i < ans; i++)
			printf("%c", s[i]);
	
	printf("\n");
	
	return 0;
}
