#include<bits/stdc++.h>
using namespace std;

void swap(double &x,double &y ){ double t=x; x=y; y=t;}

int main(){
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    t1%=12;
    t2%=12;
    double a1 = 1.0*t1*30;
    double a2 = 1.0*t2*30;
    if(a1> a2) swap(a1,a2);
    h = h%12;
    double s1 = 6.0*s;
    double m1 = 1.0*m*6.0 + 0.1*s;
    double h1 = 30.0*h + 0.5*m + 1.0*s/120;
    int cnt = 0;
    if(s1>a1 && s1 < a2) cnt++;
    if(m1>a1 && m1 < a2) cnt++;
    if(h1>a1 && h1 < a2) cnt++;
    bool ans = (cnt == 3 || cnt == 0);
    cout<<(ans?"YES":"NO")<<endl;
    return 0;
}
