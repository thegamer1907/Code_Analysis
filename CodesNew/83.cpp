#include <bits/stdc++.h>
using namespace std;
const double eps= 10e-9;

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
        //printf("%d - %d = %f\n",a[i+1],a[i],dif);
        if(mid-dif<0.00000000){
            //cout<<mid<<" - "<<dif<<" "<<mid-dif<<" break"<<endl;
            return false;
        }
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
            //printf("%f %f %f\n",hi,mid,lo);

            if(chk(total,mid,a,len)){
                //cout<<"Yes"<<endl;
                hi=mid;
            }
            else{
                //cout<<"No"<<endl;
                lo=mid;
            }
        }

        printf("%.9f\n",mid);
        return 0;
}
