#include<bits/stdc++.h>
#define ll long long
using namespace std; 
int n;
char s[108][5];
char s1[5];
char now[5]; 
int main(){
	cin>>s1>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			strcpy(now, s[i]);
			strcat(now, s[j]);
			if(strstr(now,s1)){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
	
} 