#include<stdio.h>
#include<string.h>
using namespace std;

bool judge(int x){
    int sum=0;
    while(x){
        sum+=x%10;
        x/=10;
    }
    if(sum==10)
        return true;
    else
        return false;
}

int a[1000005];
int main()
{
    int k=0;
    for(int i=0;i<=100000000;i++)
        if(judge(i))
            a[k++]=i;
    while(scanf("%d",&k)!=EOF){
        printf("%d\n",a[k-1]);
    }
}


    		 	 	 	 	 					 			    			