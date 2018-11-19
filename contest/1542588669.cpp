#include<cstdio>
#include<cstdlib>
using namespace std;
int main(){
    char psw[2],wd[102][2];
    int n,s[]={0,0};
    scanf("%c%c",&psw[0],&psw[1]);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("\n%c%c",&wd[i][0],&wd[i][1]);
        if(psw[0]==wd[i][0]&&psw[1]==wd[i][1]){
          printf("YES");
          exit(0);
        }
        if(psw[0]==wd[i][1])s[1]=1;
        if(psw[1]==wd[i][0])s[0]=1;
    }
    if(s[0]==1&&s[1]==1){
        printf("YES");
    }else{
        printf("NO");
    }
}
