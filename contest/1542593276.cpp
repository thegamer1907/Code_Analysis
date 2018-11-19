#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
typedef long long ll;

char buf1[5];
int n;
char buf2[105][5];

int main(){
    scanf("%s",buf1);
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%s",&buf2[i]);
    for(int i=0;i<n;i++){
        if(strcmp(buf1,buf2[i])==0){
            printf("YES\n");
            return 0;
        }
    }
    // phase2
    bool flag1 = false; int flag1p = 0;
    for(int i=0;i<n;i++){
        if(buf1[0]==buf2[i][1]){flag1=true;flag1p=i;break;}
    }
    if(!flag1){
        printf("NO\n");
        return 0;
    }
    bool flag2 = false; int flag2p = 0;
    for(int i=0;i<n;i++){
        if(buf1[1]==buf2[i][0]){
            flag2=true;flag2p=i;break;
        }
    }
    if(!flag2){
        printf("NO\n");
        return 0;
    }
    printf("YES\n");
    return 0;
}
