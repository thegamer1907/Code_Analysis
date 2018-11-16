#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<math.h>
using namespace std;

char row[60];

int main(){
	int n;
	scanf("%d",&n);
	
	int ans=0;
	scanf("%s",row);
	for (int i=1; i<n; i++){
		if (row[i]==row[i-1]) ans++;
	}
	
	printf("%d",ans);
	return 0;
}