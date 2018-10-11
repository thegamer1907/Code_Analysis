#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

map<string, bool> words;
int commom;

int main(){
	int n, m; string word;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		cin >> word;
		words[word] = true;
	}
	for(int i=0; i<m; i++){
		cin >> word;
		if(words.find(word) != words.end()) commom ++;
	}
	if(commom % 2){
		if(n >= m) printf("YES\n");
		else printf("NO\n");	
	}else{
		if(n > m) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}