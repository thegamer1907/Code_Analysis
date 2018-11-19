#include <iostream>
#include <stdio.h>
using namespace std;

int n,k,cnt[20];
bool f,f1[10],f2[10][10],p[100005][10];

int main(){
    scanf("%d %d",&n,&k);
    if(k==1){
        for(int i=0;i<n;i++){
            int a;
            scanf("%d",&a);
            if(a==0)f=true;
        }
    }else if(k==2){
        bool f01=false,f10=false;
        for(int i=0;i<n;i++){
            int a,b;
            scanf("%d %d",&a,&b);
            if(a==0&&b==0)f=true;
            else if(a==0&&b==1)f01=true;
            else if(a==1&&b==0)f10=true;
        }
        if(f01&&f10)f=true;
    }else if(k==3){
        for(int i=0;i<n;i++){
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            if(a==0&&b==0&&c==0)f=true;
            if(a==1&&b==0&&c==0)f1[0]=true;
            if(a==0&&b==1&&c==0)f1[1]=true;
            if(a==0&&b==0&&c==1)f1[2]=true;
            p[i][0]=a==1;p[i][1]=b==1;p[i][2]=c==1;
        }
        for(int i=0;i<3;i++)
            if(f1[i]){
                bool ff=false;
                for(int j=0;j<n;j++)if(!p[j][i])ff=true;
                if(ff)f=true;
            }
    }else{
        for(int i=0;i<n;i++){
            int curr=0;
            for(int j=0;j<4;j++){
                int tmp;
                scanf("%d",&tmp);
                if(tmp==1)p[i][j]=true;
                if(p[i][j])curr++;
            }
            if(curr==0)f=true;
            else if(curr==1){
                for(int j=0;j<4;j++)if(p[i][j])f1[j]=true;
            }else if(curr==2){
                int t1=-1,t2=-1;
                for(int j=0;j<4;j++)
                    if(!p[i][j]){
                        if(t1==-1)t1=j;
                        else t2=j;
                    }
                f2[t1][t2]=true;
            }
        }
        for(int i=0;i<4;i++)
            if(f1[i]){
                bool ff=false;
                for(int j=0;j<n;j++)if(!p[j][i])ff=true;
                if(ff)f=true;
            }
        if( (f2[0][1] && f2[2][3])||
            (f2[0][2] && f2[1][3])||
            (f2[0][3] && f2[1][2]))f=true;
    }
    if(f)printf("Yes\n");
    else printf("No\n");
    return 0;
}

