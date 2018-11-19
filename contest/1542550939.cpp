
#include <iostream>
#include <stdio.h>
#include <math.h> 
#include <cstring>
using namespace std;
int main(){
    float h,m,s,t1,t2;
    float a[6];
    int b[5];
    while( scanf("%f%f%f%f%f",&h ,&m ,&s ,&t1 ,&t2)!=EOF){
        a[2]=s*6.0;
        a[1]=m*6.0+s*0.1;
        a[0]=h*30.0+m*0.5+s*0.001;
        a[3]=t1*30.0;
        a[4]=t2*30.0;
        if(a[1]>=360) a[1]-=360;
        if(a[0]>=360) a[0]-=360;
        if(a[2]>=360) a[2]-=360;
        if(a[3]>=360) a[3]-=360;
        if(a[4]>=360) a[4]-=360;
        memset(b,0,sizeof(b));
        b[3]=1;
        b[4]=1;
        for(int i=0;i<=4;i++){
            for(int j=i;j<=4;j++){
                double t;
                int p;
                if(a[i]>=a[j]){
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                    p=b[i];
                    b[i]=b[j];
                    b[j]=p;
                }
            }
        }
        bool sign=false;
        for(int i=0;i<=3;i++){
            if(b[i]==1&&b[i+1]==1){
                sign=true;
                break;
            }
        }
        if(b[0]==1&&b[4]==1) sign=true;
        if(sign) printf("yes\n");
        else if(!sign) printf("no\n");
    }
    return 0;
}

	 			  				    		  		  			 	