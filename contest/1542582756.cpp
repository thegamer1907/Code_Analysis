#include <iostream>
using namespace std;

int up(int n){
    if (n < 0)  
        return n+60;
}

double posH(int h,int m,int s){
    double aux = h;
    aux += ((double)m)*(5.0/60);
    //cout << "aux " << aux << endl;
    aux += (double)s*(5.0/60)*(1.0/60);
    return aux;
}
double posM(int m,int s){
    double aux = m;
    aux += s*(1.0/60);
    return aux;
}

bool isDown(double x, int t1,int t2){
    if(t1 > t2) swap(t1,t2);
    if(x > t1 && x < t2)
        return true;
    return false;
}
bool isUp(double x, int t1,int t2){
    if(t1 < t2) swap(t1,t2);
    t2 += 60;
    if(x < t1) x +=60;
    if(x > t1 && x < t2)
        return true;
    //cout << "x " << x << " t1 " << t1 << " t2 " << t2 << endl;
    return false;
}

int main(){
    int h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;
    if(t1 == 12) t1 = 0;
    if(t2 == 12) t2 = 0;
    if(h == 12) h = 0;
    h *= 5;t1 *= 5; t2 *= 5;
    double hnew = posH(h,m,s);
    double mnew = posM(m,s);
    if(isUp(hnew,t1,t2)&&isUp(mnew,t1,t2)&&isUp(s,t1,t2))
        cout << "YES\n";
    else if(isDown(hnew,t1,t2)&&isDown(mnew,t1,t2)&&isDown(s,t1,t2))
        cout << "YES\n";
    else
        cout << "NO\n";
    }