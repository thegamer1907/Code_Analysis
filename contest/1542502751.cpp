#include<iostream>
#include<algorithm>
using namespace std;
bool flag1,flag2;
int main()
{
    char a,b,x,y;
    int n;
    scanf("%c %c",&a,&b);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        getchar();
        scanf("%c %c",&x,&y);
        if(x==b){flag1=1;}
        if(y==a){flag2=1;}
        if(x==a&&y==b){flag1=flag2=1;}

    }
    if(flag1&&flag2){printf("YES\n");}
    else printf("NO\n");
}
