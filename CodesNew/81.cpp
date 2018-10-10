#include <bits/stdc++.h>
using namespace std;

bool chk(int total,double mid,int a[],int len){
    int i,c;
    double dif;

    if(a[0]!=0)
        if(mid<a[0])
            return false;

    if(a[total-1]!=len)
        if(mid<len-a[total-1])
            return false;

    for(i=0;i<total-1;i++){
        dif = (double)(a[i+1]-a[i]*1.0)/2.0;
        if(mid<dif)
            return false;
    }

    return true;
}

int main()
{
        int total,len,i;
        scanf("%d%d",&total,&len);
        int a[total];
        for(i=0;i<total;i++)
            scanf("%d",&a[i]);

        sort(a,a+total);
        double hi,lo,mid;
        hi=len;
        lo=0.0;
        
        for(i=0;i<100;i++){
            mid = lo + (hi-lo)/2.0;
            
            if(chk(total,mid,a,len))
                hi=mid;            
            else
                lo=mid;
        }

        printf("%.9f\n",mid);
        return 0;
}
