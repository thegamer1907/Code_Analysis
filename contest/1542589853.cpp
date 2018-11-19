#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<set>
#define  ll long long
using namespace std;
int main(){
    char p[5];
    scanf("%s",p);
    int n;
    scanf("%d",&n);
    char a[5];
    char ans[5]={"AA"};
    bool flag=0;
    for(int i=1;i<=n;i++){
        scanf("%s",a);
        if(strcmp(a,p)==0)   {flag=1;break;}
        else{
            if(a[0]==p[1])
                ans[1]=a[0];
            if(a[1]==p[0])
                ans[0]=a[1];
        }
    }
  //  puts(ans);
    if(flag||strcmp(ans,p)==0)
        printf("YES\n");
    else   printf("NO\n");
    return 0;
}
