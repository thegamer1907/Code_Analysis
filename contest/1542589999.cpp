#include<bits/stdc++.h>
using namespace std;
int main(){
	char f,s,c[3];
	int n;
	bool ff=0,fs=0;
	scanf("%c%c\n%d",&f,&s,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",c);
		if(c[0]==f&&c[1]==s){
			puts("YES");
			return 0;
		}
		if(c[1]==f)ff=1;
		if(c[0]==s)fs=1;
	}
	if(ff&&fs)puts("YES");
	else puts("NO");
}