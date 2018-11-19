#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+100;


int main(){
    double h,m,s,t1,t2;
    scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
    if(t1>t2) swap(t1,t2);
    if(s>0) m+=0.5;
    if(m>0) h+=0.5;
    double m1=t1*5*1.0;
    double m2=t2*5*1.0;
    if(m==0) m=60;
    if(s==0) s=60;
   // cout<<m1<<" "<<m2<<endl;
    if((m<=m1||m>=m2)&&(s<=m1||s>=m2)&&(h<=t1||h>=t2)){
        cout<<"YES"<<endl;return 0;
    }
    if((m>=m1&&m<=m2)&&(s>=m1&&s<=m2)&&(h>=t1&&h<=t2)){
      //  cout<<h<<" "<<t1<<" "<<t2<<endl;
        cout<<"YES"<<endl;return 0;
    }
    cout<<"NO"<<endl;return 0;
}
