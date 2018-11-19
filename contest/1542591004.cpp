#include <bits/stdc++.h> 

using namespace std;
char pw[4];
char word[100][4];
int main(){
	scanf("%s",pw);
//	cout<<"Aaaa"<<endl;
	int n;
	scanf("%d",&n);
	int flag = 0;
	for(int i=1;i<=n;i++){
		scanf("%s",word[i]); 
		if(word[i][0]==pw[0] && word[i][1]==pw[1]) flag = 1;
	}
	if(!flag){
		int fir = 0,sec = 0;
		for(int i=1;i<=n;i++){
			if(word[i][1]==pw[0]) fir = 1;
			if(word[i][0]==pw[1]) sec = 1;
		}		
		if(fir && sec) flag = 1;
	}
	if(flag) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}