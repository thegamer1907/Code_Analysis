#include<bits/stdc++.h>
using namespace std;
char s[105][5],ss[5];
int main()
{
    int n;
    scanf("%s%d",ss,&n);
    for(int i=0;i<n;i++) scanf("%s",s[i]);
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][1]==ss[0]&&s[j][0]==ss[1]) ans=1;
            if(s[i][0]==ss[0]&&s[i][1]==ss[1]) ans=1;
        }
    }
    printf("%s\n",ans?"YES":"NO");
    return 0;
}
