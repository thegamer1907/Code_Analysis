#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll h,m,s,t11,t22;
double h1,m1,s1,t1,t2;
int main() {
    bool f=0;
    cin>>h>>m>>s>>t11>>t22;
    if(h==12)h=0;
    s1=s*1.0*0.2;
    m1=(m*60+s)*1.0*0.1/30;
    h1=(h*3600+m*60+s)*1.0*(1.0/(120))/30;
    //cout<<h1<<" "<<m1<<" "<<s1<<endl;
    t1=t11*1.0;
    t2=t22*1.0;
    if(t1>t2) {
        swap(t1,t2);
    }
    //cout<<t1<<" "<<t2<<endl;

    if((t1>=h1||h1>=t2)&&(t1>=m1||m1>=t2)&&(t1>=s1||s1>=t2)) {
        f=1;
        //cout<<"1::"<<f<<endl;
    } if(t1<=h1&&h1<=t2&&t1<=m1&&m1<=t2&&t1<=s1&&s1<=t2) {
        f=1;
         //cout<<"2::"<<f<<endl;
    }

    puts(f?"YES":"NO");
}
