#include <bits/stdc++.h>
using namespace std;
int cheak,h,m,s,t1,t2;
double a[5];

main()
{
    cin>>h>>m>>s>>t1>>t2;
    a[0]=h*5 + 0.1;
    a[1]=m + 0.1;
    a[2]=s + 0.1;
    a[3]=t1*5;
    a[4]=t2*5;
    sort(a,a+5);
    for(int i=0;i<4;i++){
        if(((t1*5==a[i])&&(t2*5==a[i+1]))||((t2*5==a[i])&&(t1*5==a[i+1]))){
            cheak++;
        }
    }
    if((t1*5==a[0]&&t2*5==a[4])||(t2*5==a[0]&&t1*5==a[4])){
        cheak++;
    }

    if(cheak>0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
