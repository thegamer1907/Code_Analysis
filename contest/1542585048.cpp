#include<cstdio>
#include<cstring>

using namespace std;

bool head[30];
bool tail[30];
char pw[5],word[5];
	
int main() {
	int n;
	bool flag=false;
	scanf("%s",pw);
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%s",word);
		head[word[0]-'a'] = true;
		tail[word[1]-'a'] = true;
		if(word[0] == pw[0] && word[1] == pw[1]) flag=true;
	}
	if(flag==true) {
		printf("YES");
	} else if(head[pw[1]-'a'] == true && tail[pw[0]-'a'] == true) {
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}