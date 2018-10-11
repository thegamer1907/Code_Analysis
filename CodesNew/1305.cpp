#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(void)
{
	char a[101];
	long long b[4],c[4],jia[4],qian,xian;
	long long d,e,f,g,h,i,j,k,l,zong;
	long long shu[4];
	scanf("%s",a);
	d=strlen(a);
	b[1]=0;b[2]=0;b[3]=0;
	for(e=0;e<d;e++)
	{
		if(a[e]=='B')b[1]++;
		if(a[e]=='S')b[2]++;
		if(a[e]=='C')b[3]++;
	}
	cin>>c[1]>>c[2]>>c[3];
	cin>>jia[1]>>jia[2]>>jia[3];   
	cin>>qian;
    for(e=1;e<=3;e++)
    {
	 if(b[e]>0){
	            shu[e]=c[e]/b[e];
	            qian=qian+(c[e]%b[e])*jia[e];
			   }
	  else shu[e]=10000000;
 	}
    if(shu[1]>shu[2]){
    	               e=b[1];b[1]=b[2];b[2]=e;
    	               e=c[1];c[1]=c[2];c[2]=e;
    	               e=shu[1];shu[1]=shu[2];shu[2]=e;
    	               e=jia[1];jia[1]=jia[2];jia[2]=e;
                     }
    if(shu[2]>shu[3]){
    	               e=b[2];b[2]=b[3];b[3]=e;
    	               e=c[2];c[2]=c[3];c[3]=e;
    	               e=shu[2];shu[2]=shu[3];shu[3]=e;
    	               e=jia[2];jia[2]=jia[3];jia[3]=e;
                     }
	if(shu[1]>shu[2]){
    	               e=b[1];b[1]=b[2];b[2]=e;
    	               e=c[1];c[1]=c[2];c[2]=e;
    	               e=shu[1];shu[1]=shu[2];shu[2]=e;
    	               e=jia[1];jia[1]=jia[2];jia[2]=e;
                     }				                  
    if(shu[2]>shu[3]){
    	               e=b[2];b[2]=b[3];b[3]=e;
    	               e=c[2];c[2]=c[3];c[3]=e;
    	               e=shu[2];shu[2]=shu[3];shu[3]=e;
    	               e=jia[2];jia[2]=jia[3];jia[3]=e;
                     }                
	zong=shu[1];
	xian=jia[1]*b[1];
	if(qian>xian*(shu[2]-shu[1])&&(b[2]!=0)){
								   zong=shu[2];
		                           qian=qian-xian*(shu[2]-shu[1]);
		                           xian=xian+jia[2]*b[2];
								   if(qian>xian*(shu[3]-shu[2])&&(b[3]!=0)){
   									                              zong=shu[3];
                                                                  qian=qian-xian*(shu[3]-shu[2]);
		                                                          xian=xian+jia[3]*b[3];
		                                                          zong=zong+qian/xian;
   								                                }
   								          else zong=zong+qian/xian;                      
								 }
		else zong=zong+qian/xian;
	cout<<zong;							 				 	 	
} 