#include<bits/stdc++.h>
using namespace std;

char word[5],arr[101][5];

int main(void){
	scanf("%s",word);
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%s",arr[i]);
	bool suc=false;
	for(int i=0;i<n;i++)
		if(strcmp(word,arr[i])==0){
			suc=true;break;
		}
	if(!suc){
		bool A=false,B=false;
		for(int i=0;i<n;i++){
			if(arr[i][0]==word[1])B=true;
			if(arr[i][1]==word[0])A=true;
		}
		if(A&&B)suc=true;
	}
	if(suc)printf("YES\n");
	else printf("NO\n");
	return 0;
}