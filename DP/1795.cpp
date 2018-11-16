#include<cstdio>
#include<cstring>
using namespace std;
char s[100005];
int main(){
    scanf("%s",s);
    int l=strlen(s);
	bool flag1=false,flag2=false,flag3=false;
	for (int i=0;i<l;){
		if (l-i>=3&&(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='A')||(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='B')){
			if (!flag3)
				flag3=true;
			else {
				flag1=true;
				flag2=true;
				break;
			}
			i+=3;
		}
		else if (l-i>=2&&s[i]=='A'&&s[i+1]=='B'){
			flag1=true;
			if (flag3)
				flag2=true;
			i+=2;
		}
		else if (l-i>=2&&s[i]=='B'&&s[i+1]=='A'){
			flag2=true;
			if (flag3)
				flag1=true;
			i+=2;
		}
		else
			i++;
		if (flag1&&flag2)
			break;
	}
	printf("%s\n",(flag1&&flag2)?"YES":"NO");
    return 0;
}