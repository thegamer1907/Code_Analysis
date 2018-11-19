#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mem(a,x) memset(a,x,sizeof(a))
#define maxn 

char str[5];
char ch[105][5];
int n,flag,st1,st2;

int main(){
	while(scanf("%s",str) != EOF){
		scanf("%d",&n);
		flag = 0;
		for(int i = 1;i <= n;i++){
			scanf("%s",ch[i]);
			if(strcmp(str,ch[i]) == 0){
				flag = 1;
			}
		}
		if(flag){
			puts("YES");
		}else{
			st1 = st2 = 0;
			for(int i = 1;i <= n;i++){
				if(ch[i][0] == str[1])
					st1 = 1;
				if(ch[i][1] == str[0])
					st2 = 1;
				if(st1 && st2)
					break;
			}
			if(st1 && st2)
				flag = 1;
			if(flag)
				puts("YES");	
			else
				puts("NO");
		}
	}
	return 0;
} 