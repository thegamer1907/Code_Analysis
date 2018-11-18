#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    char str[5],s[107][5],tmp[5];
    int n;
    scanf("%s%d",str,&n);
    for(int i=1;i<=n;i++)
		scanf("%s",s[i]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++){
            strcpy(tmp, s[i]);
			strcat(tmp, s[j]);
            if(strstr(tmp,str))
            {
				printf("YES\n");
				return 0;
			}
        }
    printf("NO\n");
}