#include <bits/stdc++.h>
using namespace std;
float h,p,g,t1,t2,giay,phut;
int kt;
int main() {
    cin>>h>>p>>g>>t1>>t2;
    p+=g/60;
    h+=p/60;
    phut=p/5;
    giay=g/5;
    if (giay==0) giay=12;
    if (phut==0) phut=12;
    if (t1>t2) swap(t1,t2);
    if (t1<h&&t2>h) kt++;
    if (t1<phut&&t2>phut) kt++;
    if (t1<giay&&t2>giay) kt++;
    if ((t1-h)*(t1-phut)*(t1-giay)*(t2-h)*(t2-phut)*(t2-giay)==0) cout <<"NO"; else
    if (kt==0||kt==3) cout <<"YES"; else cout <<"NO";
    return 0;
}
