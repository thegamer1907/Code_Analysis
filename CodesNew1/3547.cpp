#include <iostream>
#include <fstream>
#include<string.h>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
int n,min=1000000001,max=0,x[100],m,res;
bool q=0;
cin>>n>>m;
res=m;
for(int i=0;i<n;i++){
    cin>>x[i];
    if(x[i]>max)
        max=x[i];
    if(x[i]<min)
        min=x[i];
}
sort(x,x+n);
while(m>0){
    for(int i=0;i<n;i++){
        if(i!=n-1){
            if(x[i+1]-x[i]>0){
                if(m-(x[i+1]-x[i])>=0){
                    m-=(x[i+1]-x[i]);
                    x[i]+=(x[i+1]-x[i]);
                }
                else{
                    x[i]+=m;
                    m=0;
                }
                q=1;
            }

        }
        else{
           if(q==0){
            x[i]++;
            m--;
           }
           q=0;
        }
    }
}
cout<<x[n-1]<<" "<<res+max;
    return 0;
}
