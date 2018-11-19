#include <iostream>
#include <algorithm>

using namespace std;

int status,h,m,s,t1,t2;
double a[5];

int main()
{
    cin>>h>>m>>s>>t1>>t2;
    a[0]=h*5 + 0.1 ,  a[1]=m + 0.1 ,   a[2]=s + 0.1 ,  a[3]=t1*5 ,a[4]=t2*5;
    sort(a,a+5);
    for(int i=0;i<4;i++){
        if(((t1*5==a[i]) and (t2*5==a[i+1])) or ((t2*5==a[i]) and (t1*5==a[i+1]))){
            status++;
        }
    }
    if((t1*5==a[0] and t2*5==a[4]) or (t2*5==a[0] and t1*5==a[4])){
        status++;
    }

    if(status>0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}
