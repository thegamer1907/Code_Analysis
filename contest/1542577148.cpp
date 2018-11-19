#include <bits/stdc++.h>
using namespace std;
double h,m,s,t1,t2,a[555];
int main(){
    cin>>h>>m>>s>>t1>>t2;
    s/=5;
    m/=5, m += s/60;
    h += m/60 + s/3600;
    a[0] = h, a[1] = m, a[2] = s;
    sort(a,a+3);
    for(int i=0;i<30;++i){
        a[i+3] = a[i] + 12;
    }
    t1 += 60, t2 += 60;
    if(t1>t2){
        swap(t2,t1);
    }
    for(int i=0;i<30;++i){
        if(t1>=a[i]&&t2>=a[i]&&t1<=a[i+1]&&t2<=a[i+1]){
            cout<<"YES";
            return 0;
        }
    }
    t1 += 12;
    swap(t1,t2);
    for(int i=0;i<30;++i){
        if(t1>=a[i]&&t2>=a[i]&&t1<=a[i+1]&&t2<=a[i+1]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}