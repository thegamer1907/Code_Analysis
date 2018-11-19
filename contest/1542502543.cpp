#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
bool pd(double l,double r,double a,double b){
    if((a>=l&&a<=r) && (b>=l&&b<=r))return 1;
    return 0;
}
double a[5];
int main(){
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(t1>t2)swap(t1,t2);
    if(s!=0 || m!=0)
        h+=0.1;
    m=m/5;
	if(s!=0) m+=0.1;
    s=s/5;
    a[0]=h;
    a[1]=m;
    a[2]=s;
    sort(a,a+3);
    int f=0;
    for(int i=0;i<2;i++){
        if(pd(a[i],a[i+1],t1,t2)){
        	f=1;
        }
    }
    if((t1<=a[0]&&t2>=a[2]) || (t1>=a[2] && t2>=a[2]) || (t1<=a[0] && t2<=a[0]))
        f=1;
    cout<<(f==1?"YES":"NO")<<endl;
    return 0;
}
