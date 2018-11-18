#include<iostream>
#include<algorithm>
using namespace std;
bool book[60];
int main()
{
    int h,m,s,t1,t2;
    scanf("%d%d%d",&h,&m,&s);
    scanf("%d%d",&t1,&t2);
    if(t2==12){t2=0;}
    if(t1==12){t1=0;}
    if(h==12){h=0;}
    if(m==0&&s==0){book[h*2]=true;}
    else{book[h*2+1]=true;}

    if(s==0&&m%5==0){m/=5;book[m*2]=true;}
    else {m/=5;book[m*2+1]=true;}

    if(s%5==0){s/=5;book[s*2]=true;}
    else {s/=5;book[s*2+1]=true;}

    book[0]=book[0]|book[24];

    int flag=0;
//    for(int i=0;i<24;i++){
//        printf("%2d ",i);
//    }
//    printf("\n");
//    for(int i=0;i<24;i++){
//        printf("%2d ",book[i]);
//    }
//    printf("\n");
    for(int i=t1*2;;i++){
        if(i==24){i=0;}
        if(book[i]==true){break;}
        if(i==t2*2){flag=1;}

    }

    for(int i=t1*2;;i--){
        if(i==-1){i=23;}
        if(book[i]==true){break;}
        if(i==t2*2){flag=1;}
    }
    if(flag){printf("YES\n");}
    else printf("NO\n");

}
