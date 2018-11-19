#include <stdio.h>
int main(){
    double h,m,s;
    int l=0,temp,a,b;
    scanf("%lf%lf%lf%d%d",&h,&m,&s,&a,&b);
    h+=0.001;
    s/=5;
    s+=0.001;
    m/=5;
    m+=0.001;
    if(a<b){
        temp=b;
        b=a;
        a=temp;
    }
    if(h>=b&&h<=a)l++;
    if(s>=b&&s<=a)l++;
    if(m>=b&&m<=a)l++;
    if(l==0||l==3)printf("YES\n");
    else printf("NO\n");
}