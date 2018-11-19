#include<iostream>
#include<cstdio>
#include<cstring>
#include<set>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
double eps = 1e-6;
struct Point{
    double h,m,s;
    void setdate(){
        cin >> h >> m >> s;
    }
};
double t1,t2;
double cirh,cirm,cirs;
Point A;
double Min,Max;
bool OK(double x){
    if(Min < x && x < Max)
        return true;
    return false;
}
bool solve(){
    double cirt1,cirt2;
    cirt1 = t1*30;
    cirt2 = t2*30;
    Min = min(cirt1,cirt2);
    Max = max(cirt1,cirt2);
    if(OK(cirh) && OK(cirm) && OK(cirs))
        return true;
    if(!OK(cirh) && !OK(cirm) && !OK(cirs))
        return true;
    return false;
}
int main(void){
    A.setdate();
    cin >> t1 >> t2;
    if(A.h > 12 || abs(A.h - 12) < eps){
        A.h -= 12;
    }
    cirs = A.s*6;
    cirm = (A.m + A.s/60)*6;
    cirh = (A.h + A.m/60 + A.s/3600)*30;
    if(solve())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    
    return 0;
}