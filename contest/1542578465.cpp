#include <iostream>
using namespace std;
int main() {
    char p1,p2;
    int flag1=0,flag2=0,flag3=0,flag4=0;
    cin>>p1>>p2;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char x,y;
        cin >>x>>y;
        if(x==p1&&y==p2)
            flag1=1;
        if(x==p2&&y==p1)
        {
            flag4=1;
        }
        if(x==p2)
            flag2=1;
        if(y==p1)
            flag3=1;

    }
    if(flag1||flag2&&flag3||flag4)
        printf("YES");
    else printf("NO");
}