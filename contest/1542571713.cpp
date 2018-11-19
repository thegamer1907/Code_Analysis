#include<cstdio>
#include<cstdlib>
float min(float a,float b){
    return a>b?b:a;
}
float max(float a,float b){
    return a>b?a:b;
}
int infield(int t,float a,float b){
    return a<=t&&t<=b;
}
int main(){
    float h,m,s;
    int t1,t2;
    scanf("%f %f %f %d %d",&h,&m,&s,&t1,&t2);
    h=(int)h*30%360+m/2+s/3600;
    m=m*6+s/10;
    s=s*6;
    t1=t1*30%360;
    t2=t2*30%360;
    float mint=min(min(h,m),s);
    float midt=(h==mint?min(m,s):(m==mint?min(h,s):min(h,m)));
    float maxt=max(max(h,m),s);
    if(infield(t1,mint,midt)&&infield(t2,mint,midt)){printf("YES");exit(0);}
    if(infield(t1,midt,maxt)&&infield(t2,midt,maxt)){printf("YES");exit(0);}
    if((infield(t1,0,mint)||infield(t1,maxt,360))&&(infield(t2,0,mint)||infield(t2,maxt,360))){printf("YES");exit(0);}
    printf("NO");
}
